#ifndef DIFF_EQ_H
#define DIFF_EQ_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>

class diff_eq
{
private:
    /* data */
    
public:
    diff_eq(
        std::vector<double> &x, 
        std::vector<double> &n_p,
        std::vector<double> &n_e,
        std::vector<double> &n_m,
        std::vector<double> &V,
        std::vector<double> &D_p,
        std::vector<double> &D_e,
        std::vector<double> &D_m,  
        std::vector<double> &T
    );
    // ~diff_eq();

    void solver_diff_eq();

    int Z_k(const char ch);
};




#endif