#include <iostream>                                                                           //Inicialização da biblioteca padrão para c++
#include <math.h>                                                                            //Inicialização da biblioteca matemática para c++ para acessar a função pow() (potenciação)
#include <iomanip>                                                                          //Inicializaçao da biblioteca iomanip para escrever números de ponto flutuante com determinadas casas decimais
using namespace std;

int main(){
    int n = 0;                                                                                   //Declaraçao da primeira variável, que é o número de termos da somatória
    double leibniz = 0.0;                                                                       //Declaração da variável que servirá para armazenar a primeira conta que o programa fará
    double pi = 0.0;                                                                           //Declaração da variável que armazenará o termo
    cin >> n;                                                                                 //Input do usuário que determinará a quantidade de termos da conta
    double v[n];                                                                             //Declaração do vetor para armazenar cada termo do Pi
    for(int i = 0; i<n; i++){                                                               //Loop que fará o cálculo termo a termo até que a condição seja satisfeita -> i < n
        leibniz = (pow(-1, i))/(2.0*i+1);                                                  //Cálculo da fórumula que fornece a variação dos termos de pi
        pi += leibniz*4;                                                                  //Multiplicação pelo fator de 4 para fornecer a variação correta
        v[i] = pi;                                                                       //Atribuição do valor encontrado a uma posição específica no vetor para facilitar acesso
        cout << fixed << setprecision(20) << v[i] << ",";                               //Impressão de cada valor, com precisão de 20 casas decimais separadas por uma virgula
    }
    cout << fixed << setprecision(20) << pi << endl;                                   //Impressão do resultado de Pi para visualização separada do último termo
}