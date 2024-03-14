public class bubble_sort {
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        int sort_list[] = {23, 4, 23, 5, 90, 88, 6, 3457, 2, 11, 667, 4};
        for (int i = 0; i < sort_list.length - 1; i++) {
            for (int j = 0; j < sort_list.length - i - 1; j++) {
                if (sort_list[j] > sort_list[j + 1]) {
                    swap(sort_list, j, j + 1);
                }
            }
        }
        for (int i = 0; i < sort_list.length; i++) {
            System.out.println(sort_list[i]);
        }
    }
}