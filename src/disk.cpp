#include "disk.h"


static std::string DATA_PATH = "data.txt";

bool openFileW(const std::string &path, std::ofstream &hnd) {
    hnd = std::ofstream(path, std::ios::binary);
    return hnd.is_open();
}

bool openFileR(const std::string &path, std::ifstream &hnd) {
    hnd = std::ifstream(path, std::ios::binary);
    return hnd.is_open();
}

void save() {
    std::ofstream Hnd;
    if (!openFileW(DATA_PATH, Hnd)) return;
    BUFF b {0,0,0,0,0,0,0,0};
    read(b);
    Hnd.write((char*)&b.i0, sizeof(int));
    Hnd.write((char*)&b.i1, sizeof(int));
    Hnd.write((char*)&b.i2, sizeof(int));
    Hnd.write((char*)&b.i3, sizeof(int));
    Hnd.write((char*)&b.i4, sizeof(int));
    Hnd.write((char*)&b.i5, sizeof(int));
    Hnd.write((char*)&b.i6, sizeof(int));
    Hnd.write((char*)&b.i7, sizeof(int));
    Hnd.close();
}

void load() {
    std::ifstream Hnd;
    if (!openFileR(DATA_PATH, Hnd)) return;
    BUFF b {0,0,0,0,0,0,0,0};
    Hnd.read((char*)&b.i0, sizeof(int));
    Hnd.read((char*)&b.i1, sizeof(int));
    Hnd.read((char*)&b.i2, sizeof(int));
    Hnd.read((char*)&b.i3, sizeof(int));
    Hnd.read((char*)&b.i4, sizeof(int));
    Hnd.read((char*)&b.i5, sizeof(int));
    Hnd.read((char*)&b.i6, sizeof(int));
    Hnd.read((char*)&b.i7, sizeof(int));
    write(b);
}

