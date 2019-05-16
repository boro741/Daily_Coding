#include <iostream>

using namespace std;

bool isPrime(int number){
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i=3; (i*i) <= number; i+=2) {
        if (number % i == 0 ) return false;
    }
    return true;
}

int main(){
    
    int n;
    cin>>n;
    int fact = 0;
    cout<<2<<" ";
    for (int i = 3; i <= n; i+=2) { 
        if (isPrime(i)) 
            cout << i << " "; 
    } 
    
}