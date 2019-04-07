#include<iostream> 
#include<vector>
#include<set>

using namespace std; 

int main()
{	
    vector<int> A{1,3,4};
    vector<int> B{1,4,5};

    set<int> hashSet(A.begin(),A.end());    

    for(int x:B){
        if(hashSet.find(x) != hashSet.end()){
            cout<<x<<endl;
        }
    }

	return 0;
} 
