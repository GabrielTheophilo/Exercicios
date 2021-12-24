#include <iostream>
#include "funcoes.h"

int calculaTamanho(char* texto){
    int i = 0;
    int aux = 0;
    while(texto[i]!='\0'){
        aux++;i++;
    }
    return aux;
}

void Strings::leString(){
    std::cin >> texto;
    textoTamanho = calculaTamanho(texto);
    processaCifra();
}

void Strings::processaCifra(){
    int a = 0;
    for(int i = 0; i<textoTamanho;i++){
        int a = texto[i];
        if(a>108){
            a = a-14;
        }
        else{
            a = a+13;
        }
        cifrado[i] = a;
    }
}

void Strings::imprimePrograma(){
    std::cout << "Texto cifrado ao estilo Caesar: " << cifrado << std::endl;

}