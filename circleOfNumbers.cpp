int circleOfNumbers(int n, int firstNumber) {

    int half = n/2;
    
    if(firstNumber >= 0 && firstNumber < half ){
        return half+firstNumber;
    }else{
       return  firstNumber - half;
    }


}
