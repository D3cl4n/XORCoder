#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <vector>
#include <fstream>

#include "types.h"

class IOUtils
{
    private:
        std::string target_file; //cannot be const because it would be unmutable after construction
        std::vector<uint8_t> file_bytes;

    public:
        void set_target_file(const std::string filename);
        const std::string get_target_file();
        IORet read_file_bytes();

        //constructor
        IOUtils();
};

#endif