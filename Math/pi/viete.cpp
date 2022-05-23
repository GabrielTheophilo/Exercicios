#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double x = sqrt(2);
    double y = x/2;
    cout << 2/y << endl;
    for(int i=0;i<100;i++){
        x = sqrt(2+x);
        y = y*(x/2);
        cout << fixed << setprecision(20) << (2/y) << ",";
    }
}
