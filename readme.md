### equation
$$\nabla \cdot (- D_k \nabla n_k) + \nabla \cdot \lbrack \mu_k Z_k n_k (-\nabla V) = R_k $$ 

$$\Delta V = - \dfrac{e}{\varepsilon_0} \displaystyle \sum _{k} n_k Z_k  $$


### discretized equation for numerical analysis 

$$ \dfrac{1}{(\Delta x)^2} \left(-D_k^{j + 1}  n_k^{j + 2} + (D_k^{j + 1} + D_k^{j}) n_k^{j + 1} -D_k^j n_k^{j} \right) \\
-\dfrac{1}{(\Delta x)^2} \left( \mu_k^{j + 1} Z_k n_k^{j + 1} V^{j + 2} - (\mu_k^{j + 1}n_k^{j + 1} + \mu_k^{j}n_k^{j})Z_k V^{j + 1} + \mu_k^{j}Z_k n_k^{j} V^{j} \right) = 0\\
\\

V^{j + 2} - 2 V^{j + 1} + V^{j} = - \dfrac{e}{\varepsilon_0} (\Delta x)^2 \displaystyle \sum_k Z_k n_k
$$


## 