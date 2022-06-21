#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
    char plaintext[1024];
    printf("Insert the text to be coded: ");
    scanf("%s", &plaintext);
    int strLen = strlen(plaintext);
    char cypheredText[1024] = "";
    
    for(int i=0;i<strLen;i++){
        int plainChar = plaintext[i];
        int shift = plainChar%97;
        int newInt = 122-shift;
        char cipheredChar = newInt;
        cypheredText[i] += cipheredChar;
        printf("%c", cypheredText[i]);
    }
}
