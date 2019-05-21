#include<iostream>
using namespace std;

int main(){
    
    int a = 1, b = 2,c = 3;
    int *P = &a,*Q = &b,*R = &c;
    
    P = Q;
    R = Q;
    Q = R;
    
    R = Q->P=R->Q=R;
    //swap(P,Q);
    cout<<"P: "<<*P<<" Q: "<<*Q<<" R: "<<*R<<endl;
    return 0;
}
