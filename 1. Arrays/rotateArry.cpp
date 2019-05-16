#include<iostream>
using namespace std;


// USING TEMP array
/*
    int n = 7;
	int arr[7] = {1,2,3,4,5,6,7};
    int d = 2;
    int temp[d];

    for(int i=0;i<d;i++)
        temp[i] = arr[i];
    
    int k=0;
    for(int i=d;i<=n;i++){
        arr[k] = arr[i];
        k++;
    }

    int j = 0;
    for(int i=k-1;i<n;i++){
        arr[i] = temp[j];
        j++;
    }

*/

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    int d;
	    cin>>d;
	    int temp;
	    
	    while(d--){
	        
	       temp = arr[0];
	       
	       for(int i=0;i<n-1;i++)
	           arr[i] = arr[i+1];
	       
	       arr[n-1] = temp;
	    }
	    
	    for(int x:arr)
	        cout<<x<<" ";
	    
	    cout<<endl;
	}
	return 0;
}