#include <iostream>
using namespace std;


int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int input=0;
    cin >> input;
    int a = fib(input);
    cout << a << endl; 
}
