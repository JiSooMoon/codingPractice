String[] addBorder(String[] picture) {

    int sizeArray = picture.length;
    int sizeChar = picture[0].length();
    System.out.println(sizeArray + "  and  " + sizeChar);
    
    
    String[] results = new String[sizeArray + 2];
    
    
    
    
    String top_bottom = "";
    for(int i = 0; i < sizeChar + 2; i++){
        top_bottom = top_bottom + "*";
    }
    results[0] = top_bottom;
    results[sizeArray + 1] = top_bottom;
   
    int count = 1;
    for(int i = 0; i < sizeArray; i++){
        results[count++] = "*"+picture[i]+"*";
    }
    
    System.out.println("results[1] is: "+results[1]);
    /*System.out.println(results[0]);
    System.out.println(results[sizeArray + 1]);
    
    return results;
    */
    return results;

}
