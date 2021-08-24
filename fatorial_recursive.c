#include <stdio.h>

int fat(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
    return n*fat(n-1);
    }
}
int main(){
    signed int i;
    scanf("%d", &i);
    long j = fat(i);
    printf("%d", j);

}
