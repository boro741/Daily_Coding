#include<iostream> 
#include <vector>
#include<string>
#include<unordered_set>
using namespace std; 


int main()
{	
    vector<int> v {2,1,1,3,2,5};
    unordered_set<int> ht;

    for(int x:v){
        if(ht.find(x) != ht.end()){
            cout<<x<<" is 1st recurring"<<endl;
            break;
        }else{
            ht.insert(x);
        }
    }

	return 0;
} 
