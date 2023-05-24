#include "ram.h"
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "keyboard.h"
#include <iostream>
#include <string>

int main() {
    RAM ram;
    CPU cpu;
    Disk disk;
    GPU gpu;
    Keyboard keyboard;

    std::string command;
    while (true) {
        std::cout << "Enter a command (sum, save, load, input, display, exit): ";
        std::cin >> command;

        if (command == "sum") {
            int result = cpu.compute(ram);
            std::cout << "Sum: " << result << '\n';
        } else if (command == "save") {
            disk.save(ram);
            std::cout << "Data saved to disk.\n";
        } else if (command == "load") {
            disk.load(ram);
            std::cout << "Data loaded from disk.\n";
        } else if (command == "input") {
            keyboard.input(ram);
            std::cout << "Numbers entered.\n";
        } else if (command == "display") {
            gpu.display(ram);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Try again.\n";
        }
    }

    return 0;
}
