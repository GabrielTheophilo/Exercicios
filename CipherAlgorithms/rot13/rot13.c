#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char texto[1024];
    int a = 0;
    char K[1024];
    scanf("%s", &texto);
    a = strlen(texto);
    for(int i = 0;i<a;i++){
        int b = texto[i];
        if (b>108){
            b = b-27+13;
        }
        else{
            b = b+13;
        }
        char newText = b;
        K[i] = newText;
    }
    printf("%s", K);
}