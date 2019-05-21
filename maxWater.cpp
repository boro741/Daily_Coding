#include<iostream>
using namespace std;


int main(){
    
    int len = 9;
    int arr[9] = {8,1,6,4,10,2,3,7,9};
    long long maxRes = LLONG_MIN;
    long long dist;
    long long minHeight;

    int i = 0;
    int j = len-1;
    while(i < j-2){
        dist = abs(i-j)-1;
        minHeight = min(arr[i],arr[j]);
        maxRes = max(maxRes,dist*minHeight);
        cout<<"i j: "<<i<<" "<<j<<" max: "<<maxRes<<endl;
        if(arr[i] < arr[j])
            i++;
        else
            j--;
    }
    
    cout<<"Result: "<<maxRes<<endl;

    return 0;
}