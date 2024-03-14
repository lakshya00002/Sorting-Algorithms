def selection_sort(arr):
    for i in range (len(arr)):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
            arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr            

sorted = selection_sort([23,1,68,90,45,22,2,66,8,9,2,1])
print(sorted)