// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int updown = 0;
    int res = 0;
    for(char c:s){
        if(c == 'U')
            updown++;
        else
            updown--;
        
        if(updown == 0 && c == 'U')
            res++;
    }
    return res;
}