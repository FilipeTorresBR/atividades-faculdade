import numpy as np
import matplotlib.pyplot as plt
import math

def calcularBom():
    array_bom = np.array([29, 30, 33, 33, 32, 37, 37, 31, 30, 24, 24, 22, 22, 25], np.int16)
    array_sempre_confia = np.array([19, 19, 21, 21, 20, 22, 21, 19, 18, 14, 15, 15, 13, 17], np.int16)
    nElementos = len(array_bom)

    b = ((sum(array_bom * array_sempre_confia) - ((sum(array_bom) * sum(array_sempre_confia))/nElementos))/ (sum(array_bom**2) - ((sum(array_bom)**2) /nElementos)))
    b = round(b, 2)
    yBarrado = round(sum(array_sempre_confia)/nElementos,2)
    xBarrado = round(sum(array_bom)/nElementos,2)
    a = round(yBarrado - (b * xBarrado),2)

    plt.title("Gráfico de Regressão Linear")
    plt.plot(array_bom, (a + (b*array_bom)), label = 'Bom')
    plt.scatter(array_bom, array_sempre_confia)
    plt.xlabel("Avaliação como Ótimo/Bom")
    plt.ylabel("Sempre confiam")
    plt.show()

def calcularRegular():
    array_regular = np.array([30, 32, 26, 22, 23, 27, 29, 26, 24, 30, 24, 24, 24, 28], np.int16)
    array_as_vezes_confia = np.array([36, 37, 37, 32, 32, 35, 39, 38, 35, 34, 28, 28, 26, 29], np.int16)
    nElementos = len(array_regular)

    b = ((sum(array_regular * array_as_vezes_confia) - ((sum(array_regular) * sum(array_as_vezes_confia))/nElementos))/ (sum(array_regular**2) - ((sum(array_regular)**2) /nElementos)))
    b = round(b, 2)
    yBarrado = round(sum(array_as_vezes_confia)/nElementos,2)
    xBarrado = round(sum(array_regular)/nElementos,2)
    a = round(yBarrado - (b * xBarrado),2)

    plt.title("Gráfico de Regressão Linear")
    plt.plot(array_regular, (a + (b*array_regular)), label = 'Regular')
    plt.scatter(array_regular, array_as_vezes_confia)
    plt.xlabel("Avaliação como Ótimo/regular")
    plt.ylabel("Sempre confiam")
    plt.show()

def calcularRuim():
    array_ruim = np.array([38, 36, 38, 43, 44, 34, 32, 40, 44, 45, 51, 53, 53, 46], np.int16)
    array_nunca_confia = np.array([44, 43, 38, 44, 46, 41, 37, 41, 45, 50, 55, 57, 60, 53], np.int16)
    nElementos = len(array_ruim)

    b = ((sum(array_ruim * array_nunca_confia) - ((sum(array_ruim) * sum(array_nunca_confia))/nElementos))/ (sum(array_ruim**2) - ((sum(array_ruim)**2) /nElementos)))
    b = round(b, 2)
    yBarrado = round(sum(array_nunca_confia)/nElementos,2)
    xBarrado = round(sum(array_ruim)/nElementos,2)
    a = round(yBarrado - (b * xBarrado),2)

    plt.title("Gráfico de Regressão Linear")
    plt.plot(array_ruim, (a + (b*array_ruim)), label = 'Ruim')
    plt.scatter(array_ruim, array_nunca_confia)
    plt.xlabel("Avaliação como Ótimo/ruim")
    plt.ylabel("Sempre confiam")
    plt.show()

calcularBom()
calcularRegular()
calcularRuim()
plt.legend()
