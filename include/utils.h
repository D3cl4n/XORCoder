#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <vector>

class IOUtils
{
    private:
        std::string target_file;
        std::vector<uint8_t> file_bytes;

    public:
        void set_target_file(std::string filename);
        std::string get_target_file();
        std::vector<uint8_t> read_file_bytes();

        //constructor
        IOUtils();
};

#endif