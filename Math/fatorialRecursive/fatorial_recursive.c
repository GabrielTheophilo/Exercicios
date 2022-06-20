#include <stdio.h>

int fatorial(int fatorialNumber){
    if (fatorialNumber == 0 || fatorialNumber == 1){
        return 1;
    }
    else{
        return fatorialNumber*fatorial(fatorialNumber-1);
    }
}
int main(){
    signed int inputNumber;
    printf("Please insert the number you want to factor: ");
    scanf("%d", &inputNumber);
    long fatoredNumber = fat(inputNumber);
    printf("Fatored Number: %d", fatoredNumber);

}
