int absoluteValuesSumMinimization(int[] a) {
    int len = a.length;
    
    if(len % 2 != 0){ //odd length
        
        return a[len/2];
        
    }else{
     
        return a[len/2-1];
    }
}
