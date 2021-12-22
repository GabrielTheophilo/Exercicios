#include <iostream>

#include "funcoes.h"

int calculaTamanho(char* texto){
    int i = 0;
    int aux = 0;
    while(texto[i]!='\0'){
        aux++;
        i++;
    }
    return aux;
}

void Strings::leString(){
    std::cin >> texto;
    std::cin >> cifra;
    textoTamanho = calculaTamanho(texto);
    cifraTamanho = calculaTamanho(cifra);
    if(textoTamanho==cifraTamanho){
        std::cout << "\nCifrando\n";
        processaCifra();
    }
    else{
        std::cout << "\nTexto cifrado não é do mesmo tamanho do texto de entrada. Abortando programa." << std::endl;
    }
    
}

void Strings::processaCifra(){
    int a;
    int b;
    int media;
    for(int i = 0; i< textoTamanho;i++){
        a = int(texto[i]);
        b = int(cifra[i]);
        media = ((a+b))-97;
        if((media)>=123){
            media = media-27;
        }
        cifrado[i] = media;
    }
}

void Strings::imprimePrograma(){
    std::cout << "*Encriptação seguindo a cifra de Vigenére*\n";
    std::cout << "\nTexto Base: " << texto << std::endl;
    std::cout << "Chave: " << cifra << "\n\n";
    std::cout << "Texto cifrado: " << cifrado << std::endl;
}

