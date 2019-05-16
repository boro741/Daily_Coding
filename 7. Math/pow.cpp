#include <iostream>

using namespace std;

int counter = 0;

unsigned long long int pow(unsigned long long int base,int exponent){
    counter++;
    if(exponent == 1)
        return base;
        
    if(exponent % 2 == 0)
        return pow(base*base,exponent/2);
    else
        return base*pow(base*base,exponent/2);
}

int main() 
{ 
    
    cout<<pow(2,17)<<endl;
    cout<<counter<<endl;
    return 0; 
} 