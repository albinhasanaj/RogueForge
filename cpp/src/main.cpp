#include <iostream>
#include "Player.hpp"

int main() {
    Player p1("Player1");
    std::cout << "Player initalized with: " << p1.getHealth() << " health" << std::endl;
    return 0;
}
