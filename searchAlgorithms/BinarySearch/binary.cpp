//Binary Search in C++ 

//Busca Binária em C++ 

#include<iostream>
using namespace std;

template<class T>
T BinarySearch(const T arr[], int SizeArr, const T& key){
    int low = 0, mid, high = SizeArr-1;
    while(low<high){
        mid = (low+high)/2;
        if(key<arr[mid]){
            high = mid -1;
        }else if(key>arr[mid]){
            low = mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}


int main()
{
    int arr[10] ={0,14,22,31,40,49,53,76,89,100};
    
    int key = 14;
    int size = *(&arr + 1) - arr; 
    
    int k = BinarySearch(arr,size, key);
    if(k!=-1){
        cout << "Found on index: " << k+1;
    }else{
        cout << "Not found on the list";
    }
    return 0;
}
