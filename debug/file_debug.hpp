#ifndef FILE_DEBUG
#define FILE_DEBUG

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class file_debug
{
private:
    /* data */
public:
    file_debug();
    void write(const char *fileName, const double value);
    void write_vector(const char *fileName, std::vector<double> vec);
};

#endif