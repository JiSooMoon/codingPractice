int commonCharacterCount(std::string s1, std::string s2) {

 /*   
    int i = 0;
    int count = 0;
    while(s1[i] != '\0'){
        
        char check = s1[i];
        int j = 0;
        while(s2[j] != '\0'){
            if(check == s2[j]){
                count++;
            }
            j++;
        }
        
        i++;
    }
    return count;
*/
    int count=0;
    for (int i=0; i<s1.length(); i++)
        for (int j=0; j<s2.length(); j++){
            if (s1[i]==s2[j]) {
                s2[j]='0';
                count++;
                break;
             }
          }
    return count;
}
