#ifndef FILE_DEBUG
#define FILE_DEBUG

#include <iostream>
#include <fstream>
#include <vector>

class file_debug
{
private:
    /* data */
public:
    file_debug(const char *fileName, const double value);
    void write(const char *fileName, const double value);
    void write_vector(const char *fileName, std::vector<double> vec);
};

#endif