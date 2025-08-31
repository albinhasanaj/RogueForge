#include "Player.hpp"
#include <iostream>
#include <map>
#include <cctype>


//constructor definition
Player::Player(const std::string& name)
    : name(name), health(100), level(1) {}
    
char Player::nextMove(const MoveOptions& moves) {
    std::cout << "\n" << moves.description << "\n";
    char choiceKey = 'A';
    for (const auto& option : moves.options) {
        std::cout << choiceKey << ": " << option << "\n";
        choiceKey++;
    }
    std::cout << "> ";

    char choice;
    std::cin >> choice;
    return std::toupper(choice);
}
int Player::getLevel() const {
    return level;
}

int Player::getHealth() const {
    return health;
}
