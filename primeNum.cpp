#include<iostream>
#include<math.h>
#include<climits>
void printPrime(int n){
    printf(" 2 ");
    int j;
    for(int i=3;i<INT_MAX&&n>1;i+=2){
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf(" %d ",i);
            n--;
        }
    }
}


int main(){

   printPrime(5);
    return 0;
}