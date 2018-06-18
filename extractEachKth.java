int[] extractEachKth(int[] inputArray, int k) {
  
    int[] output = new int[inputArray.length - (inputArray.length/k)];
    int count = 0;
 
     for (int i = 0; i < inputArray.length; i++) {
        if ((i+1) % k != 0) {
            output[count++] = inputArray[i];
        }
     }
    return output;
}
