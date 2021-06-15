#include "ram.h"

BUFF MAIN_BUFF {0, 0, 0, 0, 0, 0, 0 ,0};

void write(BUFF &b) {
    MAIN_BUFF = b;
}

void read(BUFF &b) {
    b = MAIN_BUFF;
}