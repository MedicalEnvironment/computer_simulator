#pragma once

#include "ram.h"
#include <fstream>

class Disk {
public:
    void save(const RAM& ram);
    void load(RAM& ram);

private:
    const std::string fileName = "data.txt";
};
