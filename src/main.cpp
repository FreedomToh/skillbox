#include "cpu.h"

int main() {
    while (true) {
        std::cout << "Enter command:" << std::endl;
        std::string command;
        std::cin >> command;

        if (command == "exit") {
            break;
        } else if (command == "sum") {
            compure();
        } else if (command == "save") {
            save();
        } else if (command == "load") {
            load();
        } else if (command == "input") {
            input();
        } else if (command == "display") {
            display();
        } else {
            std::cout << "Try again" << std::endl;
        }
    }
}
