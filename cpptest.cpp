#include<iostream> 
#include <vector>
#include<string>
using namespace std; 


int main()
{	
    vector<int> a { 0, 0, 0, 9, 9};
    int len = a.size() - 1;
    
    // Removing 0's from MSB's
    for(int i = 0;i<len;i++){
        if(a[i] == 0){
            a.erase(a.begin());
        }
    }

    for(int x:a){
        cout<<x;
    }

    cout<<endl;
	return 0;
} 
