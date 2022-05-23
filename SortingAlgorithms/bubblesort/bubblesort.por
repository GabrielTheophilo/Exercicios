programa
{
	
	funcao inicio()
	{
		inteiro lista[100]
		inteiro n
		leia(n)
		para(inteiro i = 0; i<n-1;i++){
			leia(lista[i])
		}
		para(inteiro i = 0; i <n-1;i++){
			para(inteiro j = 0; j<n-1;j++){
				se(lista[i]>lista[i+1]){
					inteiro temp = lista[i]
					lista[i] = lista[i+1]
					lista[i+1] = temp
				}
			}
		}
		para(inteiro i = 0; i<n;i++){
			escreva(lista[i])
		}
	}
}
