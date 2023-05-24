#include "cpu.h"

int CPU::compute(const RAM& ram) {
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += ram.read(i);
    }
    return sum;
}
