int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    
    int when = -1;
    int height = 0;
    while(1){
        height = height + upSpeed;
        if(height >= desiredHeight){
            return when + 2;
        }
        height = height  - downSpeed;
        when++;
        
    }
    
}
