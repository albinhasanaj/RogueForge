#include "Player.hpp"
#include <iostream>

//constructor definition
Player::Player(const std::string& name): name(name), health(100) {}

int Player::getHealth() const {
    return health;
}
