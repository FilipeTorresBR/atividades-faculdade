import numpy as np
import matplotlib.pyplot as plt 
from scipy.stats import norm
import math

escala = range(1, 1, 100)

array_bom = np.array([32, 33, 29, 30, 33, 33, 32, 37, 37, 31, 30, 24, 24, 22, 22, 25])
media_bom = np.mean(array_bom)
desvio_padrao_bom = np.std(array_bom)
popular_soma_media_bom = media_bom + (4 * desvio_padrao_bom)
popular_menos_media_bom = media_bom - (4 * desvio_padrao_bom)

intervalo_bom = (popular_soma_media_bom - popular_menos_media_bom ) / (100 - 1)
novo_array_bom = [popular_menos_media_bom]

i = 1  
while i < 100:
    novo_array_bom.insert(i, novo_array_bom[i-1] + intervalo_bom)
    i += 1

funcao_bom = (1.0/(desvio_padrao_bom*np.sqrt(2.0*math.pi)))*np.exp(-0.5*((novo_array_bom-media_bom)/desvio_padrao_bom)**2.0)
print ("Media Bom: " + str(media_bom))
print ("Desvio Padrão Bom: " + str(desvio_padrao_bom))
plt.plot(novo_array_bom, funcao_bom, label = 'Bom')

array_regular = np.array([33, 31, 30, 32, 26, 22, 23, 27, 29, 26, 24, 30, 24, 24, 24, 28])
media_regular = np.mean(array_regular)
desvio_padrao_regular = np.std(array_regular)
popular_soma_media_regular = media_regular + (4 * desvio_padrao_regular)
popular_menos_media_regular = media_regular - (4 * desvio_padrao_regular)

intervalo_regular = (popular_soma_media_regular - popular_menos_media_regular ) / (100 - 1)
novo_array_regular = [popular_menos_media_regular]

i = 1  
while i < 100:
    novo_array_regular.insert(i, novo_array_regular[i-1] + intervalo_regular)
    i += 1

funcao_regular = (1.0/(desvio_padrao_regular*np.sqrt(2.0*math.pi)))*np.exp(-0.5*((novo_array_regular-media_regular)/desvio_padrao_regular)**2.0)
print ("Media Regular: " + str(media_regular))
print ("Desvio Padrão Regular: " + str(desvio_padrao_regular))
plt.plot(novo_array_regular, funcao_regular, label = 'Regular')

array_ruim = np.array([30, 33, 38, 36, 38, 43, 44, 34, 32, 40, 44, 45, 51, 53, 53, 46])
media_ruim = np.mean(array_ruim)
desvio_padrao_ruim = np.std(array_ruim)
popular_soma_media_ruim = media_ruim + (4 * desvio_padrao_ruim)
popular_menos_media_ruim = media_ruim - (4 * desvio_padrao_ruim)

intervalo_ruim = (popular_soma_media_ruim - popular_menos_media_ruim ) / (100 - 1)
novo_array_ruim = [popular_menos_media_ruim]

i = 1  
while i < 100:
    novo_array_ruim.insert(i, novo_array_ruim[i-1] + intervalo_ruim)
    i += 1

funcao_ruim = (1.0/(desvio_padrao_ruim*np.sqrt(2.0*math.pi)))*np.exp(-0.5*((novo_array_ruim-media_ruim)/desvio_padrao_ruim)**2.0)
print ("Media Ruim: " + str(media_ruim))
print ("Desvio Padrão Ruim: " + str(desvio_padrao_ruim))
plt.plot(novo_array_ruim, funcao_ruim, label = 'Ruim')

array_nsnr = np.array([4, 2, 2, 1, 3, 2, 1, 1, 3, 2, 2, 1, 1, 1, 1, 1])
media_nsnr = np.mean(array_nsnr)
desvio_padrao_nsnr = np.std(array_nsnr)
popular_soma_media_nsnr = media_nsnr + (4 * desvio_padrao_nsnr)
popular_menos_media_nsnr = media_nsnr - (4 * desvio_padrao_nsnr)

intervalo_nsnr = (popular_soma_media_nsnr - popular_menos_media_nsnr ) / (100 - 1)
novo_array_nsnr = [popular_menos_media_nsnr]

i = 1  
while i < 100:
    novo_array_nsnr.insert(i, novo_array_nsnr[i-1] + intervalo_nsnr)
    i += 1

funcao_nsnr = (1.0/(desvio_padrao_nsnr*np.sqrt(2.0*math.pi)))*np.exp(-0.5*((novo_array_nsnr-media_nsnr)/desvio_padrao_nsnr)**2.0)
plt.plot(novo_array_nsnr, funcao_nsnr, label = 'Não Sabe/Não Respondeu')
plt.legend()
plt.xlabel("Probabilidade")
plt.ylabel("Frequência")

plt.show()

print ("Media Não Sabe/Não Respondeu: " + str(media_nsnr))
print ("Desvio Padrão Não Sabe/Não Respondeu: " + str(desvio_padrao_nsnr))