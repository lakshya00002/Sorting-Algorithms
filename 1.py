def sort_list(l):
    for i in range (len(l)-1):
        for j in range(len(l)-1):
            if(l[j] > l[j+1]):
                l[j], l[j+1] = l[j+1], l[j]
    return l            

sorted = sort_list([1,45,89,23,3,2,90,45])
print(sorted)
