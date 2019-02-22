// Generate all possible strings of binary of 'n' bits
#include<iostream>

using namespace std;


char A[10];

void Binary(int n){
    
    if(n<1) // Base Case
        cout<<A<<endl;
    else{
        // First genarating 0's
        A[n-1] = '0';
        Binary(n-1);
        
        // Now generating 1's
        A[n-1] = '1';
        Binary(n-1);
    }
}

int main(){
    
    Binary(4);
    
    return 0;
}
