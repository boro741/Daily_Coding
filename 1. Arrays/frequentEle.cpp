#include<iostream> 
#include<vector>
#include<map>

using namespace std; 

int main()
{	
    vector<int> A{1,3,2,1,2,1};

    map<int,int> hashMap;    

    for(int x:A){
        hashMap[x]++;
    }
    
    unsigned currentMax = 0;
    unsigned arg_max = 0;
    for(auto itr=hashMap.begin();itr!=hashMap.end();itr++){
         if (itr ->second > currentMax) {
                arg_max = itr->first;
                currentMax = itr->second;
         }
    }

    cout << "Value " << arg_max << " occurs " << currentMax << " times " << endl;
	return 0;
} 
