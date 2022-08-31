import numpy as np
import math
import matplotlib.pyplot as plt 
from numpy.polynomial.polynomial import polyfit

def calcularBom():
    array_bom = np.array([29, 30, 33, 33, 32, 37, 37, 31, 30, 24, 24, 22, 22, 25], np.int16)
    array_sempre_confia = np.array([19, 19, 21, 21, 20, 22, 21, 19, 18, 14, 15, 15, 13, 17], np.int16)
    nElementos = len(array_bom)
    r1 = ((nElementos * sum(array_bom*array_sempre_confia)) - (sum(array_bom) * sum(array_sempre_confia)))
    r2 = math.sqrt(((nElementos * sum(array_bom**2)) - (sum(array_bom)**2))  * ((nElementos*sum(array_sempre_confia**2)) - (sum(array_sempre_confia)**2)))
    r = (r1/r2)
    b, m = polyfit(array_bom, array_sempre_confia, 1)

    print("Coeficiente de Correlação - Bom:" + str(r))
    print("Coeficiente de Determinação - Bom:" + str(r**2))
    plt.plot(array_bom, b + m * array_bom, '-', color = '#ff0000')
    plt.scatter(array_bom, array_sempre_confia)
    plt.show()

def calcularRegular():
    array_regular = np.array([30, 32, 26, 22, 23, 27, 29, 26, 24, 30, 24, 24, 24, 28], np.int16)
    array_as_vezes_confia = np.array([36, 37, 37, 32, 32, 35, 39, 38, 35, 34, 28, 28, 26, 29], np.int16)
    nElementos = len(array_regular)
    r1 = ((nElementos * sum(array_regular*array_as_vezes_confia)) - (sum(array_regular) * sum(array_as_vezes_confia)))
    r2 = math.sqrt(((nElementos * sum(array_regular**2)) - (sum(array_regular)**2))  * ((nElementos*sum(array_as_vezes_confia**2)) - (sum(array_as_vezes_confia)**2)))
    r = (r1/r2)
    b, m = polyfit(array_regular, array_as_vezes_confia, 1)

    print("Coeficiente de Correlação - Regular:" + str(round(r, 2)))
    print("Coeficiente de Determinação - Regular:" + str(round(r**2, 2)))
    plt.plot(array_regular, b + m * array_regular, '-', color = '#ff0000')
    plt.scatter(array_regular, array_as_vezes_confia)
    plt.show()

def calcularRuim():
    array_ruim = np.array([38, 36, 38, 43, 44, 34, 32, 40, 44, 45, 51, 53, 53, 46], np.int16)
    array_nunca_confia = np.array([44, 43, 38, 44, 46, 41, 37, 41, 45, 50, 55, 57, 60, 53], np.int16)
    nElementos = len(array_ruim)
    r1 = ((nElementos * sum(array_ruim*array_nunca_confia)) - (sum(array_ruim) * sum(array_nunca_confia)))
    r2 = math.sqrt(((nElementos * sum(array_ruim**2)) - (sum(array_ruim)**2))  * ((nElementos*sum(array_nunca_confia**2)) - (sum(array_nunca_confia)**2)))
    r = (r1/r2)
    b, m = polyfit(array_ruim, array_nunca_confia, 1)
    
    print("Coeficiente de Correlação - Ruim:" + str(round(r, 2)))
    print("Coeficiente de Determinação - Ruim:" + str(round(r**2, 2)))
    plt.plot(array_ruim, b + m * array_ruim, '-', color = '#ff0000')
    plt.scatter(array_ruim, array_nunca_confia)
    plt.show()

def calcularNSNR():
    array_nsnr = np.array([2, 1, 3, 2, 1, 1, 3, 2, 2, 1, 1, 1, 1, 1], np.int16)
    array_nsnr_confia = np.array([1, 1, 5, 2, 2, 2, 3, 2, 2, 1, 1, 1, 1, 1], np.int16)
    nElementos = len(array_nsnr)
    r1 = ((nElementos * sum(array_nsnr*array_nsnr_confia)) - (sum(array_nsnr) * sum(array_nsnr_confia)))
    r2 = math.sqrt(((nElementos * sum(array_nsnr**2)) - (sum(array_nsnr)**2))  * ((nElementos*sum(array_nsnr_confia**2)) - (sum(array_nsnr_confia)**2)))
    r = (r1/r2)
    b, m = polyfit(array_nsnr, array_nsnr_confia, 1)
    
    print("Coeficiente de Correlação - Não Sabe/Não Respondeu:" + str(round(r, 2)))
    print("Coeficiente de Determinação - Não Sabe/Não Respondeu:" + str(round(r**2, 2)))
    plt.plot(array_nsnr, b + m * array_nsnr, '-', color = '#ff0000')
    plt.scatter(array_nsnr, array_nsnr_confia)
    plt.show()

calcularBom()
calcularRegular()
calcularRuim()
calcularNSNR()