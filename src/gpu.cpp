#include "gpu.h"

void display() {
    BUFF b{0,0,0,0,0,0,0,0};
    read(b);
    std::cout << b.i0;
    std::cout << " " << b.i1;
    std::cout << " " << b.i2;
    std::cout << " " << b.i3;
    std::cout << " " << b.i4;
    std::cout << " " << b.i5;
    std::cout << " " << b.i6;
    std::cout << " " << b.i7;
    std::cout << std::endl;
}

void display(int value) {
    std::cout << value <<std::endl;
}
