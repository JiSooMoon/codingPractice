int[] alternatingSums(int[] a) {

    int[] answ = new int[2];
    
    int t1 = 0;
    int t2 = 0;
    
    for(int i = 0; i < a.length; i++){
        if(i%2 == 0){
            t2 = t2 + a[i];
        }else{
            t1 = t1 + a[i];
        }
    }
    answ[0] = t2;
    answ[1] = t1;
    
    return answ;
}
