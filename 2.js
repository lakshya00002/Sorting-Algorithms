function main(){
    var arr = [34,56,2,1,90,67,45,23,11,2,34];
    let size = arr.length;
    for(let i = 0; i < size - 1; i++){
        let min = i;
        for(let j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }

        }
        if(min != i){
            var temp  = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
        }
    }

    for(i = 0; i < size; i++){
        console.log(arr[i]);
    }
}
main();