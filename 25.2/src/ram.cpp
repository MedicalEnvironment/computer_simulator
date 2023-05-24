#include "ram.h"

void RAM::write(int index, int value) {
    buffer[index] = value;
}

int RAM::read(int index) {
    return buffer[index];
}
