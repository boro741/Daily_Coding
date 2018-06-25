#include<stdio.h>

int main(){
    int *p, **q;
    int i = 2;

    p = &i;

    q = &p;
    return 0;
}