function main(){
    var arr = [34,56,2,1,90,67,45,23,11,2,34];
    let size = arr.length;
    for(let i = 0; i < arr.length - 1; i++){
        for(let j = 0; j < arr.length - 1; j++){
            if(arr[j] > arr[j + 1]){
                var temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i = 0; i < arr.length; i++){
        console.log(arr[i]);
    }
}
main();