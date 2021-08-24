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
         }
         else{
             a += shift;
         }
         cout << char(a);
         
    }
}