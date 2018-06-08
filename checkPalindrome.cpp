bool checkPalindrome(std::string inputString) {

    /*
    int size = inputString.size();
    if(size == 1){
        return true;
    }
    int i;
    int j;
   
        i = 0;
        j = size - 1;
        while(inputString[i] == inputString[j]){
            //continue;
            i++;
            j--;
        }
        
    
    if( size%2 != 0 && j == size - (size/2)){
        return true;
    }
    return false;
    */
    std::string check = "";
    int i = 0;
    while(inputString[i] != '\0'){
        check = inputString[i] + check;
        i++;
    }
    return check == inputString;
}
