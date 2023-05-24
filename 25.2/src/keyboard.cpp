#include "keyboard.h"
#include <iostream>

void Keyboard::input(RAM& ram) {
    std::cout << "Enter 8 numbers:\n";
    for (int i = 0; i < 8; ++i) {
        int value;
        std::cin >> value;
        ram.write(i, value);
    }
}
