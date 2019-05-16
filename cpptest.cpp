#include<iostream>

using namespace std;

int main(){
    
    string s1 = "aaaaa";
    string s2 = "bbb";

    int l1 = s1.length();
    int l2 = s2.length();
    int count = 0;

    // If s2 present in s1
    if(s1.find(s2) != string::npos){
        int n = ((l1/2)%2 == 0 )?l1/2-1:l1/2;
        for(int i=0;i<n;i++){
            if(s1[i] == s1[l1 - i - 1])
                continue;
            else
                count++;
        }
    }else{
        // If s2 not present in s1
        if(s1[0] != s1[l1-1]){
            count++;
        }

        for(int i=1;i<l1-2;i++){
            if(s1[i] != s2[i] && s2[i] != s1[l1 - i - 1]){
                count += 2;
            }
            else if(s1[i] == s2[i] && s2[i] != s1[l1 - i - 1]){
               count++;
            }
        }
    }
    
   cout<<count<<endl;
    return 0;
}