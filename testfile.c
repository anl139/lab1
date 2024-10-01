#include <stdio.h>
int main(){
    const int size = 10;
    int array[size] = {1,2,3,4,5,6};
    for(int i = 0; i < size;i++){
        printf(array[i]);
    }
}