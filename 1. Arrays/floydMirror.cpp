#include<iostream> 
#include <vector>
#include<string>
using namespace std; 


int main()
{	

    int n = 3;
    int res = 1;
    int firstL;
    
    for(int i=1;i<=n;i++){
        firstL = res;
        for(int j=1;j<=i;j++){
            cout<<res;
            res++;
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        firstL++;
        res = firstL - 1;
        for(int j=i;j>=1;j--){
            cout<<res;
            res++;
            firstL--;
        }
        cout<<endl;
    }
	return 0;
} 
