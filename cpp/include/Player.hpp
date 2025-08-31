#pragma once
#include <string>
#include "Inventory.hpp"
#include "Types.hpp"

class Player {
    public:
    Player(const std::string& name);
    int getHealth() const;
    void increaseLevel() {++level;};
    int getLevel() const;
    //Inventory& getInventory();
    char nextMove(const MoveOptions& moves);

    private:
    std::string name;
    int health;
    int xp;
    int level = 1;
    //Inventory inventory;
};