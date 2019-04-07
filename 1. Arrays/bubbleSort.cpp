#include<iostream>

using namespace std;

int main(){

    int arr[5] = {3,2,4,1,7};
    int n = 5;

    for(int i=0;i<n-1;i++){
	    for(int j=0;j<n-1-i;j++){
	        if(arr[j]>arr[j+1]){
	            swap(arr[j],arr[j+1]);
	        }
	    }
    }

    for(int x:arr){
        cout<<x<<" ";
    }

    cout<<endl;
    return 0;
}

