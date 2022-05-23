programa
{
	inteiro contador
	funcao inicio()
	{
		para(contador=1;contador<=100;contador++){
			se(contador%3==0 e contador%5==0){
				escreva("FizzBuzz")
			}
			senao se(contador%3==0){
				escreva("Fizz")
			}
			senao se(contador%5==0){
				escreva("Buzz")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 273; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */