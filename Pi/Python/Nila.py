
PI21 = 3.141592653589793238462
i = 1
pi = 3
erropi = PI21 - pi
print('Cálculo de PI usando a série de Nilakantha')
print('com erro menor que (10 a 10)')

valor = int(input('Digite um valor (2-20): '))
erro = 10**(-valor)
print('Você escolheru um erro < {}'.format(erro))

while(valor<2 or valor>20):
    print('Valor inválido')
    print('Escolha um número no intervalo ([2-20])')
    valor = int(input('Digite um valor (2-20): '))
parcial= str(input('Deseja ver os resultados paciais? (S/N)').upper())
print('N        PI calculado            Erro')
if (parcial=='SIM' or parcial=='S'):
    print('{}         {}                      {}'.format(i, pi, erro))
    while(i<valor):
        i2 = 2*i
        nila = pi + ((-1)**(i+1))*4/(((i2)*(i2+1))*(i2+2))
        pi = nila
        i = i+1
        erro = PI21 - pi
        erro21 = abs(erro)
        if(valor>4):
            print('%d         %.6f        %.6f'%(i, nila, erro21))
        else:
            print('{}         {}     {}'.format(i, nila, erro21))
else:
    
    while(i<=valor):
        i2 = 2*i
        nila = pi + ((-1)**(i+1))*4/(((i2)*(i2+1))*(i2+2))
        pi = nila
        erro = PI21 - pi
        i = i+1
        erro21 = abs(erro)
        if(i==valor):
            if(valor>4):
                print('%d      %.6f             %.6f'%(i, nila, erro21))

            else:
                print('{}         {}        {}'.format(i, nila, erro21))