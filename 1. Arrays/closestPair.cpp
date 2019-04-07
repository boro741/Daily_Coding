#include<iostream> 
#include<vector>
#include<unordered_set>
#include<set>

using namespace std; 

int main()
{	
    vector<int> A{-1,3,8,2,9,5};
    vector<int> B{4,1,2,10,5,20};
    int target = 24;
    unordered_set<int> setTable(A.begin(),A.end());
    set< pair<int,int> > minPair;

    for(int i=0;i<A.size();i++){

        int x = target - B[i];
        int y = target+1 - B[i];
        int z = target-1 - B[i];

        
        if(setTable.find(x) != setTable.end()){
            minPair.insert(make_pair(x,B[i]));
        }
        if(setTable.find(y) != setTable.end()){
            minPair.insert(make_pair(y,B[i]));
        } 
        if(setTable.find(z) != setTable.end()){
            minPair.insert(make_pair(z,B[i]));
        }
    }
    
    
    for (auto itr = minPair.begin(); itr != minPair.end(); itr++) { 
  
        pair<int,int> x = *itr; 
        cout << "(" << x.first << ", "
             << x.second << ")"
             << " "; 
    } 

	return 0;
} 
