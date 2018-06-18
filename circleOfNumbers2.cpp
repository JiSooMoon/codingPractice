int circleOfNumbers(int n, int firstNumber) {

    if(firstNumber >= n/2){
        return firstNumber - n/2;
    }
    return n/2 + firstNumber;
}
