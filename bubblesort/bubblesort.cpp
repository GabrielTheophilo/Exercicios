#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int lista[1000];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> lista[i];
    }
    for(int i=0;i<n-1;i++){
        for(int i=0;i<n-1;i++){
            if(lista[i]>lista[i+1]){
                int temp = lista[i];
                lista[i]=lista[i+1];
                lista[i+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<lista[i]<<endl;
    }
}
