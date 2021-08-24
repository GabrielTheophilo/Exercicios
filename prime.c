#include <stdio.h>

int main(){
    int Num=0;
    int controle = 0;
    int valorTrue = 0;
    int valorPrimo = 0;
    scanf("%d", &Num);
    controle = Num;
    for (int i=2; i<=Num;i++){
        if (Num%i==0){
            valorPrimo += 1;
        }
    }
    if (valorPrimo>=2){
        printf("Not prime.");
    }
    else if(valorPrimo<2){
        printf("prime");
    }
    
    return 0;

}