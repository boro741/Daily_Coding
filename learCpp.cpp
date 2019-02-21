#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    vector<int> a {5 ,1, 2, 3,7, 8, 6, 4};
    unordered_map<int,int> ht;
    int count = 0;

    for(int x:a){
        ht[x] = 0;
    }

    for(int pass = a.size()-1;pass >= 0;pass--){
        for(int i=0;i<a.size()-1;i++){
            if( (a[i] > a[i+1]) && (ht[a[i]] <= 2)){
                swap(a[i],a[i+1]);
                ht[a[i]]++;
                count++;
            }
        }
    }
    

    bool sorted = is_sorted(a.begin(),a.end());

    if(sorted){
        cout<<count<<endl;
    }else{
        cout<<"Too Chaotic"<<endl;
    }

}