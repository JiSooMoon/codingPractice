int adjacentElementsProduct(int[] inputArray) {

    //find the largest 
    //find the smallest
    //then make the product
    
    int num1 = inputArray[0];
    int num2= inputArray[1];
    
    int checkProduct = num1 * num2;
    for(int i = 1; i < inputArray.length-1; i++){
        if(checkProduct < inputArray[i] * inputArray[i+1]){
            checkProduct = inputArray[i] * inputArray[i+1];
        }
    }
    return checkProduct;
    
}
