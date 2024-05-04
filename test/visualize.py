import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

def plot_vector_field(file):
    df = pd.read_csv(file, delim_whitespace=True, header=None)
    print(df)
    plt.plot(df[0], df[1])
    plt.show()

if __name__ == "__main__":
    plot_vector_field(file="file")
    