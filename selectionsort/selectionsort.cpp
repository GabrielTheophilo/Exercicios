#include <iostream>


void swap(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int main(){
    int arr[] = {1,2,4,8,12,20,35,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int indice;
    for(int i = 0;i<n;i++){
        int minim = i;
        for(int j = 0;j<n;j++){
            if(arr[j]>arr[minim]){
                minim = j;
                
            }
            swap(arr[minim], arr[i]);
        }
        
    }
    for(int i = 0;i<n;i++){
        std::cout << arr[i] << std::endl;
    }
}

