int arrayMaximalAdjacentDifference(int[] inputArray) {
    
    int sizeN = inputArray.length;
    
    int first = inputArray[0];
    
    int maxDiff = Math.abs(first - inputArray[1]);
    for(int i = 1; i < sizeN-1; i++){
        if(maxDiff <  Math.abs(inputArray[i] - inputArray[i+1])){
            maxDiff = Math.abs(inputArray[i] - inputArray[i+1]);
        }
    }

    return maxDiff;
}
