bool isLucky(int n) {

    
    std::string s = std::to_string(n);
    int sizeN = s.size();
    
    int firstSum = 0;
    int secondSum = 0;
    
    for(int i = 0; i < sizeN/2; i++){
        firstSum = (int) s[i] + firstSum;
    }
    for(int j = sizeN/2; j < sizeN; j++){
        secondSum = (int) s[j] + secondSum;
    }
    if(firstSum == secondSum)
        return true;
    else
        return false;
    
}
