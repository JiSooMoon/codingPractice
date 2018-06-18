int depositProfit(int deposit, int rate, int threshold) {
    
    int countYears = 0;
    
    int total = deposit;
    
    while(total < threshold){
        
        total = total + (total * rate/100);
        cout << total << endl;
        countYears++;
    }
    return countYears;
    

}
