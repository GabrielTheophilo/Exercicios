Num=0
controle = 0
valorTrue = 0
valorPrimo = 0
Num = int(input())
controle = Num
for i in range(2, controle):
    if (Num%i==0):
        
        valorPrimo += 1
        i -= 1
    else:
        i -= 1
if (valorPrimo>=1):
    print("Not prime")

elif(valorPrimo<1):
    print("Prime")
