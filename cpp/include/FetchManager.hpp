#pragma once
#include <map>
#include <string>
#include "Types.hpp"


class FetchManager {
public:
    FetchManager();
    EncounterData getNextEncounter(int playerLevel, int playerHealth);
    MoveOptions getNextMoveOptions(const EncounterData& encounter);

private:
    std::map<std::string, int> monsterMap;
    std::map<std::string, int> weaponMap;
    std::map<std::string, std::string> questMap;
};