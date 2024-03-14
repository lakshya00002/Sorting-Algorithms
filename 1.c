#include<stdio.h>
void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;

}
int main(){
    int arr[] = {23,45,56,1,23,4,90,67,55,90,34,22};
    
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i < size - 1; i++){
         for(int j = 0; j < size -1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j],&arr[j+1]);
            }
         }
    }
     for(int i = 0; i < size; i++){
         printf("%d\t", arr[i]);
    }
    
    
    return 0;
}