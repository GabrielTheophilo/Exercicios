#include <iostream>
using namespace std;

int fatorialInstance(int fatorialNumber){
    if (fatorialNumber == 0 || fatorialNumber == 1){
        return 1;
    }
    else{
        return fatorialInstance*fatorialExpression(fatorialInstance-1);
    }
}
int main(){
    int inputNumber;
    cout << "Insert a number to factor: " << endl;
    cin >> inputNumber;
    cout<< "The factorial of: "<< inputNumber << " is " <<fat(n);
}
