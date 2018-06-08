int makeArrayConsecutive2(int[] statues) {

    int sizeStatus = statues.length;
    int smallest = 0;
    int largest = 0;
  
    Arrays.sort(statues);
    smallest = statues[0];
    largest = statues[sizeStatus-1];
    int sizeN = 0;
    int j = 1;
    for(int i = smallest; i < largest-1; i++){
        if(i+1 != statues[j]){
            sizeN++;
        }else{
        j++;
        }
    }
    return sizeN;
}
