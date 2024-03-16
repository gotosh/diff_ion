#include <iostream>
#include <vector>

#include "diff_eq.hpp"  

int main(){
    int Nx = 100;
    std::cout << "hello world" << std::endl;
    std::vector<double> x, n_p, n_e, n_m, V, D_p, D_e, D_m, T;
    std::vector<double> *x_, *n_p_, *n_e_, *n_m_, *V_, *D_p_, *D_e_, *D_m_, *T_;
    std::vector<double> a_p = {1, 3};
    std::vector<double> &a_pointa = a_p;
    diff_eq eq(
        &x, &n_p, &n_e, &n_m, &V, &D_p, &D_e, &D_m, &T;
    );
}