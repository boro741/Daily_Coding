#include<iostream> 
#include<map>

using namespace std; 

int main()
{	
    string str = "xxyyzaaz";
    map<char,int> hashMap;
    for(char c:str){
        hashMap[c]++;
    }

    bool exist = false;

    for(auto itr=hashMap.begin();itr!=hashMap.end();itr++){
        if(itr -> second == 1){
            exist = true;
            cout<<itr->first<<endl;
        }
    }

    if(!exist){
        cout<<"Distinct element doesn't exist"<<endl;
    }
	return 0;
} 
