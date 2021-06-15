#include "cpu.h"

void compure() {
    BUFF b {0, 0, 0, 0 ,0 ,0 ,0 ,0};
    read(b);

    int sum = 0;
    sum += b.i0;
    sum += b.i1;
    sum += b.i2;
    sum += b.i3;
    sum += b.i4;
    sum += b.i5;
    sum += b.i6;
    sum += b.i7;
    display(sum);
}