#include "kbd.h"

void input() {
    BUFF b {0, 0, 0, 0, 0, 0, 0, 0};
    std::cin >> b.i0 >> b.i1 >> b.i2 >> b.i3 >> b.i4 >> b.i5 >> b.i6 >> b.i7;
    write(b);
}