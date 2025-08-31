#include "FetchManager.hpp"

FetchManager::FetchManager() {
    monsterMap = {{"Goblin", 1}, {"Orc", 3}, {"Dragon", 10}};
    weaponMap  = {{"Rusty Sword", 1}, {"Steel Axe", 3}, {"Flaming Bow", 8}};
    questMap   = {
        {"Goblin", "Defeat the goblins terrorizing the village!"},
        {"Orc", "Clear the orc camp in the forest!"},
        {"Dragon", "Slay the dragon in the mountains!"}
    };
}

EncounterData FetchManager::getNextEncounter(int playerLevel, int playerHealth) {
    EncounterData data;

    int remainingBudget = playerLevel;
    for (auto it = monsterMap.begin(); it != monsterMap.end(); ++it) {
        while (remainingBudget >= it->second) {
            data.monsters.push_back(*it);
            remainingBudget -= it->second;
        }
    }

    auto chosenWeapon = weaponMap.begin();
    for (auto it = weaponMap.begin(); it != weaponMap.end(); ++it) {
        if (it->second <= playerHealth / 10) chosenWeapon = it; else break;
    }

    data.weaponName = chosenWeapon->first;
    data.weaponPower = chosenWeapon->second;

    // Use the highest monster's quest for context
    data.questDescription = questMap[data.monsters.back().first];

    return data;
}

MoveOptions FetchManager::getNextMoveOptions(const EncounterData& encounter) {
    MoveOptions moves;

    if (!encounter.monsters.empty()) {
        moves.description = "⚔️ You encounter ";
        for (size_t i = 0; i < encounter.monsters.size(); ++i) {
            moves.description += encounter.monsters[i].first;
            if (i < encounter.monsters.size() - 1) moves.description += ", ";
        }
        moves.description += "! What will you do?";
    } else {
        moves.description = "You are exploring... What now?";
    }

    moves.options = {
        "Fight",
        "Run away",
        "Quit"
    };

    return moves;

// ❌ MISSING THIS BRACE ↓
}
