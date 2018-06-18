int absoluteValuesSumMinimization(int[] a) {
    int len = a.length;
    
    if(len % 2 != 0){ //odd length
        
        return a[len/2];
        
    }else{
     
        return a[len/2-1];
    }
}

//The code below is the simplest way to solve this question, based on c++!
/*int absoluteValuesSumMinimization(std::vector<int> a) {
    return a[(a.size() - 1) / 2];
}
*/
