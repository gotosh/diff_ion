#include <iostream>
#include <vector>

#include "diff_eq.hpp"
#include "file_debug.hpp"

int main(){
    // initial condition //
    int Nx = 100;
    double L = 1;
    double dx = 0.01;
    std::cout << "hello world" << std::endl;
    const char *file_name = "file";
    file_debug file_debug;

    std::vector<double> x(Nx + 1), n_p(Nx + 1), 
    n_e(Nx + 1), n_m(Nx + 1), V(Nx + 1), D_p(Nx + 1), 
    D_e(Nx + 1), D_m(Nx + 1), T(Nx + 1);

    // Pointer is not necessary //
    std::vector<double> *x_, *n_p_, *n_e_, 
    *n_m_, *V_, *D_p_, *D_e_, *D_m_, *T_;

    // boundary condition //
    double V_0 = 0;
    double V_Nx = 5;
    diff_eq eq(
        x, n_p, n_e, n_m, V, D_p, D_e, D_m, T, L, dx, V_0, V_Nx
    );

    std::cout << eq.get_k_B() << std::endl;

    file_debug.write_vector("./file", V);





}