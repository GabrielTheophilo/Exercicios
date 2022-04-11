programa
{
	inteiro contador, inteiro numero
	funcao inicio()
	{
		leia(numero)
		limpa()
		escreva(fibonacci(numero))
	}
	funcao inteiro fibonacci(inteiro i){
		se(i==1 ou i==2){
			retorne 1;
		}
		senao{
			retorne fibonacci(i-1)+fibonacci(i-2)
		}
	}
}
