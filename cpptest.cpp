// Iterative C++ program to reverse 
// a linked list 
#include<iostream> 
#include<vector>
using namespace std; 
 

/* Driver program to test above function*/
int main() 
{ 
    vector<int> myVector = {1,2,3,4};
	vector<int> slice(myVector.begin() + 0, myVector.begin() + 2);

    
    for(int x:slice)
        cout<<x<<endl;
	return 0; 
} 
