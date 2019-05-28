#include<iostream>
using namespace std;

int main(){
    
    string s = "science";
    char tempC;
    int len = s.length();
    for(int i=0;i<len/2;i++){
        // Swap
        tempC = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = tempC;
    }
    cout<<s<<endl;
    return 0;
}
