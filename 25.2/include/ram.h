#pragma once

#include <array>

class RAM {
public:
    void write(int index, int value);
    int read(int index);

private:
    std::array<int, 8> buffer;
};
