#ifndef DIFF_EQ_H
#define DIFF_EQ_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>

#ifdef DEBUG_BUILD
#include <fstram>
#endif


class diff_eq
{
private:
    // physical constant //
    // Boltzmann constant
    const double k_B = 1.380649 * 10e-23; // JK^-1
    // mobility of cation, negative ion, and electron 
    // value of the mobility constant is from https://www.sciencedirect.com/science/article/abs/pii/S0010218020300407 
    // Experimental and numerical studies on electric field distribution of a premixed stagnation flame under DC power supply  
    double mu_p = 2.9 * 10e-4; // m^2/(sV)
    double mu_m = 2.25 * 10e-4; // m^2/(sV)
    double mu_e = 0.4;           // m^2/(sV)
    // elementary charge
    double element = 1.602176634 * 10e-19; // C
    
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
        std::vector<double> &T,
        double L,
        double dx,
        double V_0, double V_Nx
    );
    // ~diff_eq();




    void solver_diff_eq();

    double get_k_B();

    int Z_k(const char ch);
};




#endif