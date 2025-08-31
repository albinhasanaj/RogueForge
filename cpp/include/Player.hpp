#pragma once
#include <string>

class Player {
    public:
    Player(const std::string& name);
    int getHealth() const;

    private:
    std::string name;
    int health;
};