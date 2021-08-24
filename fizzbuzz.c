#include <stdio.h>

int main(){
    int i;
    for (int i = 1; i<100;i++){
        if (i%3==0 || i%5==0){
            if (i%3==0 && i%5!=0){
                printf("fizz\n");
            }
            else if (i%3!=0 && i%5==0){
                printf("buzz\n");
            }
            else printf("fizzbuzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}