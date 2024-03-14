#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;
}

int main(){
    
    int arr[] = {34,56,1,23,3,23,90,4,56,3,33,78};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}