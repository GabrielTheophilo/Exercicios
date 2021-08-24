#include <iostream>
using namespace std;

int main(){
    int Num=0;
    int controle = 0;
    int valorTrue = 0;
    int valorPrimo = 0;
    cin >> Num;
    controle = Num;
    for (int i=2; i<=Num;i++){
        if (Num%i==0){
            valorPrimo += 1;
        }
    }
    if (valorPrimo>=2){
        cout << "Not prime." << endl;
    }
    else if(valorPrimo<2){
        cout<< "prime." << endl;
    }
    
    return 0;

}
