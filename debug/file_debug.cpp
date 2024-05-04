#include "file_debug.hpp"

file_debug::file_debug(){

    // std::ofstream ofs(fileName);
    // if (!ofs)
    // {
    //     std::cout << "file cannot be opened " << std::endl;
    //     std::cin.get();
    // }

    // ofs << value << std::endl;

    std::cout << "file_debug init" << std::endl;
}

void file_debug::write(const char *fileName, const double value){

    std::fstream ofs(fileName, std::ios::app);
    if (!ofs)
    {
        std::cout << "file cannot be opened " << std::endl;
        std::cin.get();
    }

    ofs << value << std::endl;
    ofs << value * 2 << " " << value + 4 << std::endl;
    
}

// for debugging vector field
void file_debug::write_vector(const char *fileName, std::vector<double> vec){
    std::fstream ofs(fileName, std::ios::app);

    if (!ofs)
    {
        std::cout << "file cannot be opened" << std::endl;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        ofs << i << " " << vec.at(i) << std::endl;
    }   
}