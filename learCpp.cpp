#include<iostream>
#include<vector>

using namespace std;

int main(){
    // initialising the vector 
    vector<int> vec = { 10, 20, 30, 40 }; 
  
    // inserts 3 one time at front   
    auto it = vec.insert(vec.begin(), 1, 3); 
      
    cout << "The vector elements are: ";  
    for (auto it = vec.begin(); it != vec.end(); ++it) 
        cout << *it << " "; 
    return 0;
}