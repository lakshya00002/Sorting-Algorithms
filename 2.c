#include<stdio.h>

void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;
}

int main(){
    int arr[] = {34, 34, 77, 12, 244, 90, 877, 65, 1, 23, 45, 5};
    int size = sizeof(arr)/sizeof(int);
    
    for(int i = 0; i < size - 1; i++){
        int min = i; 
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){ 
                min = j; 
            }
        }
        if(min != i){ 
            swap(&arr[i], &arr[min]); 
        }
    }
    
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}