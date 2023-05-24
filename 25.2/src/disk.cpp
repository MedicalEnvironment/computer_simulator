#include "disk.h"

void Disk::save(const RAM& ram) {
    std::ofstream file(fileName);
    if (file.is_open()) {
        for (int i = 0; i < 8; ++i) {
            file << ram.read(i) << '\n';
        }
        file.close();
    }
}

void Disk::load(RAM& ram) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        int value;
        int i = 0;
        while (file >> value && i < 8) {
            ram.write(i, value);
            ++i;
        }
        file.close();
    }
}
