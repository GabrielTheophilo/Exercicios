#include <iostream>
using namespace std;

int main(){
    string texto;
    int shift;
    int a;
    cout << "Insira o texto a ser codificado: ";
    cin >> texto;
    cout << "Insira o deslocamento do alfabeto: ";
    cin >> shift;
    string K;
    if (shift > 27){
        shift = shift%27;
    }
    else{
        shift = shift;
    }
    int b = texto.length();
    for (int i=0; i<b;++i){
        //cout<< texto[i];
         a = int(texto[i]);
         if (a+shift>=123){
             a += shift-27;
             char newText = a;
             K += newText;
         }
         else{
             a += shift;
             char newText = a;
             K += newText;
         }   
    }
    cout << K;
}