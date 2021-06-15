#pragma once
#include "structures.h"

void useScalpel(POINTS p) {
    std::cout << "You made a cut between points " << p.x << " and " << p.y << std::endl;
}

void useHemostat(POINTS p) {
    std::cout << "You set hemostat at point " << p.x << std::endl;
}

void useTweezer(POINTS p) {
    std::cout << "You used tweezers at point " << p.x << std::endl;
}

void useSuture(POINTS startPoints, POINTS p) {
    std::cout << "You sewed a seam between points " << p.x << " and " << p.y << std::endl;

    if (startPoints.x != p.x || startPoints.y != p.y) {
        std::cout << "Sorry, you made a suture in the wrong place, the patient died..." << std::endl;
    }
}
