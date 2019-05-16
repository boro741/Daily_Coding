#include <iostream>

using namespace std;

int main() 
{ 
    string s = "abcdc";
    int arr[26];
    bool unique = true;
    memset(arr,0,26*sizeof(int));

    for(int i=0;i<s.length();i++){
        arr[s[i] - 97]++;
        
        if(arr[s[i] - 97]>1){
            cout<<"NO"<<endl;
            unique = false;
            break;
        }
    }

    if(unique)
        cout<<"YES"<<endl;

    return 0; 
} 