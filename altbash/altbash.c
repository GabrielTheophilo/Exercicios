#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
    char plaintext[1024];
    printf("Insira o texto a ser codificado: ");
    scanf("%s", &plaintext);
    int a = strlen(plaintext);
    char K[1024] = "";
    int i = 0;
    for(i;i<a;i++){
        int b = plaintext[i];
        int shift = b%97;
        int newInt = 122-shift;
        char C = newInt;
        K[i] += C;
        printf("%c", K[i]);
    }
}