#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int A[6] = {-1,3,8,2,9,5};
    int B[6] = {4,1,2,10,5,20};

    int target = 24;

    int minDiff = __INT_MAX__;
    int minA, minB;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            int diff = abs( (A[i] + B[j]) - target );
            if(diff < minDiff){
                minDiff = diff;
                minA = A[i];
                minB = B[j];
            }
        }
    }

    printf("%d %d",minA,minB);

    return 0;
}