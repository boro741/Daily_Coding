#include<iostream>
#include<unordered_map>

using namespace std;

// Method 1: Simple Solution - O(n^2)
int longestCommonSum(bool arr1[],bool arr2[],int n){
    int maxLen = 0;

    for(int i=0;i<n;i++){
         int sum1 = 0;
         int sum2 = 0;
        for(int j=0;j<n;j++){
           sum1 = sum1 + arr1[j];
           sum2 = sum2 + arr2[j];

           if (sum1 == sum2){ 
             int len = j-i+1; 
             if (len > maxLen) 
                maxLen = len; 
           }
        }
    }
    return maxLen;
}

// Method 2: Using Hashing - O(n)
int longestCommonSumHash(bool arr1[], bool arr2[], int n) 
{ 
    // Find difference between the two 
    int arr[n]; 
    for (int i=0; i<n; i++) 
      arr[i] = arr1[i] - arr2[i]; 
      
    // Creates an empty hashMap hM 
    unordered_map<int, int> hM; 
  
    int sum = 0;     // Initialize sum of elements 
    int max_len = 0; // Initialize result 
  
    // Traverse through the given array 
    for (int i = 0; i < n; i++) 
    { 
        // Add current element to sum 
        sum += arr[i]; 
  
        // To handle sum=0 at last index 
        if (sum == 0) 
            max_len = i + 1; 
  
        // If this sum is seen before,  
        // then update max_len if required 
        if (hM.find(sum) != hM.end()) 
          max_len = max(max_len, i - hM[sum]);  // i - current index, hM[sum] - starting of index
            
        else // Else put this sum in hash table 
            hM[sum] = i; 
    } 
  
    return max_len; 
} 


int main(){

    bool  arr1[] = {0, 1, 1}; 
    bool  arr2[] = {1, 1, 1}; 
    int n = sizeof(arr1)/sizeof(arr1[0]); 
    cout << "Length of the longest common span with same "
            "sum is "<< longestCommonSumHash(arr1, arr2, n)<<endl;
    return 0;
}