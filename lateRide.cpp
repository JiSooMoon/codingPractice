int lateRide(int n) {
    
    int hr = n / 60;
    int minutes = n % 60;
    
    return hr/10 + hr%10 + minutes/10 + minutes%10;

}
