#include <iostream>
#include "instruments.h"

int main() {
    POINTS startPoints{0, 0};

    int turn = 0;
    while(true) {
        std::cout << "Enter command:\n";
        std::string command;
        std::cin >> command;

        POINTS p {0, 0};

        if (command == "scalpel" && turn == 0) {
            std::cin >> startPoints.x >> startPoints.y;

            useScalpel(startPoints);
            turn++;
        } else if (command == "hemostat" && turn > 0) {
            std::cin >> p.x;

            useHemostat(p);
            turn++;
        } else if (command == "tweezers" && turn > 0) {
            std::cin >> p.x;

            useTweezer(p);
            turn++;
        } else if (command == "suture" && turn > 0) {
            std::cin >> p.x >> p.y;

            useSuture(startPoints, p);
            break;
        } else {
            std::cout << "Sorry, try again. First action should be \"scalpel\"." << std::endl;
        }
    }
}
