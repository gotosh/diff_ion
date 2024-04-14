import numpy as np
import matplotlib.pyplot as plt

def gauss_function(sigma, mu, x):
    return (1 / np.sqrt(2 * np.pi * sigma ** 2)) * np.exp(- ((x - mu) ** 2) / (2 * sigma ** 2))

if __name__ == "__main__":
    x = np.linspace(0, 1, 100)
    f = gauss_function(sigma=0.1, mu=0.5, x = x)
    plt.plot(x, f)

plt.show()
