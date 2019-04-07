#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A{-163, -20};
    
    // Kadane's Algo
    int sum = INT_MIN;
    int currentSum = 0;
    
    
    for(int i=0;i<A.size();i++){
        currentSum = currentSum + A[i];
        
        sum = max(currentSum,sum);
        
        if(currentSum < 0)
            currentSum = 0;
        
    }
    
    cout<<sum<<endl;
    return 0;
}
