char firstDigit(std::string inputString) {
    

    int i = 0;
    while(inputString[i] != '\0'){
        
        if(inputString[i] >= 48 && inputString[i]  <=57){
            return inputString[i];
        }
        i++;
    }
}
