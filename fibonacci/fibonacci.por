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
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 37; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */