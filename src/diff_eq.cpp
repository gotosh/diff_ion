
#include "diff_eq.hpp"

void gauss_eq(std::vector<double> &n, int size_n){
    
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
    std::vector<double> &T
){
    /* initialization */
    gauss_eq(n_p);
    gauss_eq(n_e);
    gauss_eq(n_m);

};

void ::solver_diff_eq(){
    
};

int diff_eq::Z_k(const char ch){
    if (ch == 'p') {
        return 1;
    } else if (ch == 'e' || ch == 'm'){
        return -1;
    }
}









