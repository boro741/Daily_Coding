#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isEvenFreq(unordered_map<char,int> mp,string &A,char x){
    if(mp[x] % 2 == 0){
        return true;
    }
    return false;
}


int main() {

    
    string A = "az";


    int B = 256;


    unordered_map<char,int> mp;
    for(char c:A){
        mp[c]++;
    }

    B = B%26;

    for(char &c:A){
            if(isEvenFreq(mp,A,c)){
                c = (char)((c - 'a' + 26 + B) % 26 + 'a');
            }else{
                c = (char)((c - 'a' + 26 - B) % 26 + 'a');
            }
    }

    cout<<A<<endl;
   // cout<<'a' - 22<<endl;
    // int A = -53;
    // int B = -93;

    // double mul = A * B;
    // double add = A + B;

    // double div;
    // if(B != 0){
    //     div = A / B;
    // }else{
    //     div = INT_MIN;
    // }
    
    // double sub = A - B;

    // if(mul > add && mul > div && mul > sub)
    //     cout<<"*";
    // else if(add > mul && add > div && add > sub)
    //     cout<<"+";
    // else if(div > add && div > mul && div > sub)
    //     cout<<"/";
    // else if(sub > add && sub > mul && sub > div)
    //     cout<<"-";

    return 0;
}
