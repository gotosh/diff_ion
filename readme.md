### equation
$$\nabla \cdot (- D_k \nabla n_k) + \nabla \cdot \lbrack \mu_k Z_k n_k (-\nabla V) = R_k $$ 

$$\Delta V = - \dfrac{e}{\varepsilon_0} \displaystyle \sum _{k} n_k Z_k  $$


### discretized equation for numerical analysis 

$$ \dfrac{1}{(\Delta x)^2} \left(-D_k^{j + 1}  n_k^{j + 2} + (D_k^{j + 1} + D_k^{j}) n_k^{j + 1} -D_k^j n_k^{j} \right) \\
-\dfrac{1}{(\Delta x)^2} \left( \mu_k^{j + 1} Z_k n_k^{j + 1} V^{j + 2} - (\mu_k^{j + 1}n_k^{j + 1} + \mu_k^{j}n_k^{j})Z_k V^{j + 1} + \mu_k^{j}Z_k n_k^{j} V^{j} \right) = 0 $$ 

$$ V^{j + 2} - 2 V^{j + 1} + V^{j} = - \dfrac{e}{\varepsilon_0} (\Delta x)^2 \displaystyle \sum_k Z_k n_k
$$

## Electrical potential and field
$$ V = Ed $$
$$ E = -\dfrac{\partial V}{\partial x} $$

## mobility ##
$$ \mu_{ij} = \dfrac{3}{16}\dfrac{q_i e}{\Omega_D(T) N_B}\sqrt{\dfrac{2\pi N_A}{k_B Tm_{ij}}} $$
$$ D_{ij} = \dfrac{k_B T}{e} \mu_{ij} $$

$N_B$ is a number desity of the backgroud gas 

$N_A$ is a Avogadro number

##
