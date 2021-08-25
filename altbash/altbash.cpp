#include <iostream>
using namespace std;

int main(){
    string plaintext;
    cout << "Insira o texto a ser codificado: ";
    cin >> plaintext;
    int a = plaintext.length();
    string K;
    for(int i=0;i<a;i++){
        int b = plaintext[i];
        int shift = b%97;
        int newInt = 122-shift;
        char newText = newInt;
        K += newText;
    }
    cout << K;

}