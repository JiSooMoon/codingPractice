int addTwoDigits(int n) {

    string s = to_string(n);
    
    int n1 = s[0] - 48;
    int n2 = s[1] - 48;
    
    cout << n1 << endl;
    cout << n2 << endl;
    
    
    return n1+n2;
}
