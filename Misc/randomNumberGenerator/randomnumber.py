from numpy import random
import matplotlib.pyplot as plt
import numpy
list = numpy.empty(10000000, dtype=int)
oc = numpy.empty(99, dtype=int)
list_dict = {}
for i in range(0, 9999999):
    a = random.randint(0,100)
    list[i] = a
    
convertida = numpy.ndarray.tolist(list)
#print(convertida)
for i in range(0, 99):
    ocorrencias = convertida.count(i)
    oc[i] = ocorrencias
    list_dict[i] = ocorrencias
#oc = numpy.ndarray.tolist(oc)

maximum = max(list_dict, key=list_dict.get)
print(f"O número que mais saiu é : {maximum}, ocorrendo {list_dict[maximum]} vezes")

print("Deseja fazer um gráfico com os resultados?")
choice = str(input().lower())
if(choice=="S" or choice=="SIM"):
    arr = np.zeros(100, dtype=int)
    arr = [oc]
    plt.plot(arr, color="green")
    plt.xlabel('Random number')
    plt.show()
else:
    pass
