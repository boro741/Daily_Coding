#include<iostream> 
#include<vector>
using namespace std; 

// Returns length of the longest common subarray 
// with same sum 
int longestCommonSum(bool arr1[], bool arr2[], int n){
	// Initialize result 
    int maxLen = 0;

	// One by one pick all possible starting points 
    // of subarrays
	for (int i=0; i<n; i++){ 
		// Initialize sums of current subarrays 
       	int sum1 = 0, sum2 = 0;
		
		// Conider all points for starting with arr[i]
		for (int j=i; j<n; j++) { 
           // Update sums 
           sum1 = sum1 + arr1[j]; 
           sum2 = sum1 + arr2[j];
  
           // If sums are same and current length is 
           // more than maxLen, update maxLen 
           if (sum1 == sum2){ 
             int len = j-i+1; 
             if (len > maxLen) 
                maxLen = len; 
           }
       }
	}
	return maxLen;
}


int main()
{	

	bool  arr1[] = {0, 1, 0, 1, 1, 1, 1}; 
    bool  arr2[] = {1, 1, 1, 1, 1, 0, 1}; 
    int n = sizeof(arr1)/sizeof(arr1[0]); 
    cout << "Length of the longest common span with same sum is "<< longestCommonSum(arr1, arr2, n)<<endl; 
	return 0;
} 
