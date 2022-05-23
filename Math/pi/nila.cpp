// A equação de Nilakantha encontra-se em meu relatório
// pi = 3 + 4*( (-1^n)  * ((2 * n )+3) * ((2 * n)+3) )


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int i = 1;          //valor inicial dos termos
    int i2 = 0;        // valor que guardará termos*2 
    double pi = 3;       // o primeiro fator que será adicionado à soma                 
    double nila = 0.0;      
    int n = 0;
    cin >> n;
    double arr[n] = {0};
    while(i<=n){
        i2 = 2*i;           // multiplicação dos termos para 2 para simplificar o cálculo
        nila = pi + ((pow(-1, i+1)*4/(((i2)*(i2+1))*(i2+2))));      // 3 + (4* ( (-1^n) * ((2 * n )+3)*((2 * n)+3)
        pi = nila;                                                  // pi para ser armazenado para ser inserido no vetor e para ser utilizado na multiplicação.
        arr[i] = pi;
        if(i%20==0){
            cout << fixed << setprecision(15) << arr[i] << "," << endl;
        }
        else{
            cout << fixed << setprecision(15) << arr[i] << ",";
        }
        
        i++;
    }
    
}