#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    char shift[100];
    int a;
    printf("Insira o texto a ser codificado: ");
    scanf("%s", &texto);
    printf("Insira a chave: ");
    scanf("%s", shift);
    int b;
    int media;
    char cifrado[100];
    int c = strlen(texto);
    for(int i=0;i<c;i++){
        a = (texto[i]);
        b = (shift[i]);
        media = ((a-96)+(b-b))+97;

        if((media)>=123){
            media = media-26;
        }
        cifrado[i] += media;

    }
    printf("%s", &cifrado);

}