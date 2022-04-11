programa
{
	inteiro contador, inteiro numero
	funcao inicio()
	{
		leia(numero)
		limpa()
		escreva(fatorial(numero))
	}
	funcao inteiro fatorial(inteiro i){
		se(i==0 ou i==1){
			retorne 1;
		}
		senao{
			retorne i*fatorial(i-1)
		}
	}
}
