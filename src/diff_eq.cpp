
#include "diff_eq.hpp"

// gauss function for initialization 
void gauss_eq(std::vector<double> &n, std::vector<double> &x ,double sigma, double mu){
    double pi = M_PI;
    
    for (int i = 0; i < n.size(); i++)
    {
        n.at(i) = (1 / sqrt(2 * pi * pow(sigma, 2))) * exp(- (pow((x.at(i) - mu), 2) / (2 * pow(sigma, 2))));
        
    }
}

void electric_potential(){

}

diff_eq::diff_eq(
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
){

    /* initialization */
    for (size_t i = 0; i < x.size(); i++)
    {
        x.at(i) = dx * i;
    }
    
    // Chemical species initialization //
    gauss_eq(n_p, x, 0.1, 0.5);
    gauss_eq(n_e, x, 0.1, 0.5);
    gauss_eq(n_m, x, 0.1, 0.5);

    // Voltage initialization //
    V.at(0) = V_0;
    V.at(V.size() - 1) = V_Nx;
    for (size_t i = 0; i < V.size() - 1; i++)
    {
        V.at(i) = (V.at(V.size() - 1) - V.at(0)) / V.size() * i + V.at(0);
    }
    
    // Temperature initialization //
    for (size_t i = 0; i < T.size(); i++)
    {
        T.at(i) = 300;
    }
    
    // Diffusion coefficient initialization


    // check //
    std::cout << "diff_eq constructa has instantiated" << std::endl; 
};

// void ::solver_diff_eq(){
    
// };
int diff_eq::Z_k(const char ch){
    if (ch == 'p') {
        return 1;
    } else if (ch == 'e' || ch == 'm'){
        return -1;
    }
    else {
        return 0;
    }
}

double diff_eq::get_k_B(){
    return diff_eq::k_B;
}
