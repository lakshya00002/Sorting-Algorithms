public class selection_sort {
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        int arr[] = {34, 34, 77, 12, 244, 90, 877, 65, 1, 23, 45, 5};
       
        
        for(int i = 0; i < arr.length; i++){
            int min = i; 
            for(int j = i + 1; j < arr.length; j++){
                if(arr[j] < arr[min]){ 
                    min = j; 
                }
            }
            if(min != i){ 
                swap(arr, i, min); 
            }
        }
        
        for(int i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }
    
    }
}
