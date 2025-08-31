#include <iostream>
#include "Player.hpp"
#include "FetchManager.hpp"

int main() {
    Player p1("Player1");
    FetchManager fetcher;

    std::cout << "Player initialized with: "
              << p1.getHealth() << " health\n";

    char move;
    do {
        EncounterData encounter = fetcher.getNextEncounter(p1.getLevel(), p1.getHealth());

        MoveOptions options = fetcher.getNextMoveOptions(encounter);

        move = p1.nextMove(options);

    } while (p1.getHealth() > 0 && move != 'Q');

    std::cout << "Game over.\n";
    return 0;
}
