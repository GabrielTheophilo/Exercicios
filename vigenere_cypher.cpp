#include <iostream>
using namespace std;

int main(){
    string texto;
    string shift;
    int a;
    cout << "Insira o texto a ser codificado: "<< endl;
    cin >> texto;
    cout << "Insira a chave: " << endl;
    cin >> shift;
    int b;
    int media;
    string cifrado;
    int c = texto.length();
    for(int i=0;i<c;i++){
        a = int(texto[i]);
        b = int(shift[i]);
        media = ((a-96)+(b-b))+97;

        if((media)>=123){
            media = media-26;
        }
        cifrado += media;

    }
    cout << cifrado << endl;

}