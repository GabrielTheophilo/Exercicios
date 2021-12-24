#include <iostream>
#include <string.h>
using namespace std;

int strLen(char T[]){
    int j = 0;
    while(T[j]!='\0'){
        j++;
    }
    return j;
}



void naive(char T[], char P[]){

    int n = strLen(T);
    int m = strLen(P);
    int * p;
    for(int i = 0; i<(n-m);i++){
        int j;
        p = &j;
        for(j = 0;j<n;j++){
            if(T[i+j]!=P[j]){
                break;
            }
         }
        if(j==m){
            cout << "Padrao encontrado em "<< i << endl;
        }
    }
}


int main(){
    char texto[25] = {"AABABABBABABABAAABABABAA"};
    char padrao[4] = {"ABA"};
    
    naive(texto, padrao);
    
}