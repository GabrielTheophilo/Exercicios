#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int n = 0;
    double wallis = 0.0;
    double esquerda = 0.0;
    double direita = 0.0;
    double pi = 2.0;
    cin >> n;
    double v[n];
    for(int i = 1;i<n;i++){
        double calc;
        esquerda = (double)(2*i)/((2*i)-1);
        direita =  (double)(2*i)/((2*i)+1);
        wallis = (esquerda*direita);
        pi = pi * wallis;
        v[i] = pi;
        cout <<fixed<<setprecision(10)<< v[i] << ",";
    }
    //cout << fixed << setprecision(15) << pi << endl;
}