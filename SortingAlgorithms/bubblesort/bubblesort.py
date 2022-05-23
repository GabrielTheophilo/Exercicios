lista = []
i = int(input())
for i in range(0,i):
    p = int(input(f"{i}"))
    lista.append(p)
print(lista)
j = 0;
k = 0;
for j in range(0, i):
    for k in range(0,i-1):
        if(lista[k]>lista[k+1]):
            temp = lista[k]
            lista[k] = lista[k+1]
            lista[k+1] = temp
            
print(lista)