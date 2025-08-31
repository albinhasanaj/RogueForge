#pragma once
#include <string>
#include <vector>

struct EncounterData {
    std::vector<std::pair<std::string, int>> monsters; 
    std::string weaponName;
    int weaponPower;
    std::string questDescription;
};

struct MoveOptions {
    std::string description;
    std::vector<std::string> options;
};