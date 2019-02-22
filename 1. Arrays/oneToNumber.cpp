vector<int> Solution::plusOne(vector<int> &a) {
    int len = a.size() - 1;
    
    int x = a[len] + 1;
    int carry = x / 10;
    a[len] = x % 10;
    
    
    for(int i=len-1;i>=0;i--){
        x = a[i];
        if(carry == 1)
            x = x + 1;
        carry = x / 10;
        a[i] = x % 10;
    }
    
    if(carry == 1)
        a.insert(a.begin(),1,1);

    // Removing 0's from MSB's
    while (a[0] == 0) {
        if(a[0] == 0){
            a.erase(a.begin());
        }
    }
    
   return a;
}
