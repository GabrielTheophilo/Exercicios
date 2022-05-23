programa
{
	
	funcao inicio()
	{
		inteiro Num=0;
    		inteiro controle = 0;
    		inteiro valorTrue = 0;
    		inteiro valorPrimo = 0;
    		leia(Num)
    		controle = Num;
    		para (inteiro i=2; i<=Num;i++){
     	   se (Num%i==0){
        		    valorPrimo += 1;
        		}
    		}
    		se (valorPrimo>=2){
        		escreva("Não é primo")
    		}
    		se(valorPrimo<2){
        		escreva("primo")
    		}
	}
}
