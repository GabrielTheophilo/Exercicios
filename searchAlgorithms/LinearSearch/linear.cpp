#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};
    int guess;
    bool found = false;
    for(int i = 0;i<10;i++){
        cin >> arr[i];
    }
    cout << "Insert the number to be found: ";
    cin >> guess;
    for(int i = 0;i<10;i++){
        if(arr[i]==guess){
            cout << "Found on index" << " " << i << endl;
            found = true;
        }
    }
    if(!found){
        cout << "Not found";
    }
}
