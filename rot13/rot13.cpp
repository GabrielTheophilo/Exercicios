#include <iostream>
using namespace std;

int main(){
    string plaintext;
    cout << "Insira o texto a ser codificado: ";
    cin >> plaintext;
    int a = plaintext.length();
    string K;
    for(int i=0;i<a;i++){
        int b=plaintext[i];
        if(b>108){
            b = b-27+13;
        }
        else{
            b = b+13;
        }
        char newText = b;
        K += newText;
    }
    cout << K;
}