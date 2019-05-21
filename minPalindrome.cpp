#include<iostream>
using namespace std;

bool isEven(int n){
    return n%2;
}

typedef struct{
    int c;
    string s;
}countNode;

countNode insertS2(string s1,string s2,int index){
    countNode res;
    res.c = 0;
    for(int i = index,j=0;i < index + s2.length();){
        if(s1[i] != s2[j]){
            s1[i] = s2[j];
            j++;
            i++;
            res.c++;
        }else{
            i++;
            j = (j+1)%s2.length();
        }
    }
    res.s = s1;
    return res;
}

int minPalinReplace(string s1,string s2,int count){
    int l1 = s1.length();
    int l2 = s2.length();
    
    
    int n = (isEven(l1))?l1/2-1:l1/2;
    for(int i=0;i<=n;i++){
        if(i == (l1-i-1))
            break;
        if( s1[i] == s1[l1 - i - 1] ){
            continue;
        }
        else{
            s1[l1-i-1] = s1[i];
            count++;
        }
    }
    
    if(s1.find(s2) == string::npos)
        return INT32_MAX;
    
    return count;
}

bool checkPalindrome(string s){
    int l1 = s.length();
    int n = (isEven(l1))?l1/2-1:l1/2;
    for(int i=0;i<n;i++){
        if(s[i] != s[l1 - i - 1] ){
            return false;
        }
    }
    return true;
}

bool isSpecialChar(string s){
    std::string  x(s);
    if (x.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890") != string::npos)
        return true;
    
    return false;
}

int main(){
    
  
    string s1 = "archit";
    string s2 = "ar";
    
    int res = INT32_MAX;
    int l1 = s1.length();
    int l2 = s2.length();
    
    if(isSpecialChar(s1) || isSpecialChar(s2)){
        res = -1;
    }
    else if( ( (l2 > l1/2 + 1) && !checkPalindrome(s2) ) || l1 < l2 )
        res = -1;
    else if( ((l1 < l2) && s1.find(s2) == string::npos )){
        res = -1;
    }
    else if(s1.find(s2) != string::npos){
        res = minPalinReplace(s1,s2,0);
    }
    else{
        countNode node;
        for(int i=0;i<=l1-l2;i++){
            node = insertS2(s1,s2,i);
            res = min(res,minPalinReplace(node.s,s2,node.c));
        }
    }
    
    if(res == INT32_MAX)
        cout<<-1<<endl;
    else
        cout<<res<<endl;
    return 0;
}
