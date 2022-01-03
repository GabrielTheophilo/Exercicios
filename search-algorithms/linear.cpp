#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};
    int chute;
    bool encontrado = false;
    for(int i = 0;i<10;i++){
        cin >> arr[i];
    }
    cout << "insira número a ser procurado: ";
    cin >> chute;
    for(int i = 0;i<10;i++){
        if(arr[i]==chute){
            cout << "achado no índice" << " " << i << endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout << "não encontrado";
    }
}