#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
    char texto[100];
    int a = 0;
    int shift;
    scanf("%s", &texto);
    scanf("%d", &shift);
    if(shift>27){
        shift = shift%27;
  }
    else{
        shift = shift;
    }

    int b = strlen(texto);
    char c[15];
    for(int i=0; i<b; ++i){
        a = texto[i];
        if (a+shift>=123){
            a += (shift-27);
        }
        else{
            a += shift;
        }
        c[i] += a;
    }
    //printf("%s", &texto);
    //printf("%d", shift);
    printf("%s", &c);
    return 0;
}