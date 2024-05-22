#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <iostream>

class IORet
{
    public:
        bool success;
        std::vector<uint8_t> bytearray;

        //constructor
        IORet();
};

#endif