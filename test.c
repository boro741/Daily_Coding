#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a = 1, b = 2,c = 3;
    int *P = &a,*Q = &b,*R = &c;
    
    P = Q;
    R = Q;
    Q = R;

    swap
    return 0;
}
