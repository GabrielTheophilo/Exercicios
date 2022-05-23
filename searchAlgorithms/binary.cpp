//Binary Search in C++ 

//Busca Binária em C++ 

#include<iostream>
using namespace std;

template<class T>
T BuscaBinaria(const T arr[], int TamanhoArr, const T& chave){
    int baixo = 0, meio, alto = TamanhoArr-1;
    while(baixo<alto){
        meio = (baixo+alto)/2;
        if(chave<arr[meio]){
            alto = meio -1;
        }else if(chave>arr[meio]){
            baixo = meio+1;
        }else{
            return meio;
        }
    }
    return -1;
}


int main()
{
    int arr[10] ={0,14,22,31,40,49,53,76,89,100};
    
    int chave = 14;
    int size = *(&arr + 1) - arr; 
    
    int k = BuscaBinaria(arr,size, chave);
    if(k!=-1){
        cout << "Encontrado no índice: " << k+1;
    }else{
        cout << "Não encontrado na lista";
    }
    return 0;
}
