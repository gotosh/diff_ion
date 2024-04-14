
#include "diff_eq.hpp"
#define DEBUG_BUILD

// gauss function for initialization 
void gauss_eq(std::vector<double> &n, std::vector<double> &x ,double sigma, double mu){
    double pi = M_PI;
    
    #ifdef DEBUG_BUILD
    const char *fileName = "./debug_folder/gauss";
    std::ofstream ofs(fileName);
    if (!ofs)
    {
        std::cout << "file cannot be opened " << std::endl;
        std::cin.get();
    }
    std::cin.get();
    ofs << "test" << std::endl;

    #endif
    
    for (int i = 0; i < n.size(); i++)
    {
        n.at(i) = (1 / sqrt(2 * pi * pow(sigma, 2))) * exp(- (pow((x.at(i) - mu), 2) / (2 * pow(sigma, 2))));
        
    }
    
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
    double dx
){
    /* initialization */
    for (size_t i = 0; i < x.size(); i++)
    {
        x[i] = dx * i;
    }
    
    // gauss_eq(n_p);
    // gauss_eq(n_e);
    // gauss_eq(n_m);

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
}









