#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std; 

vector<vector<int> > threeNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	sort(array.begin(),array.end());
	vector<vector<int>> triplets;
	for(int i=0;i<array.size()-2;i++){
		int left = i+1;
		int right = array.size() - 1;
		while(left < right){
			int currentSum = array[i] + array[left] + array[right];
			if(currentSum == targetSum){
				triplets.push_back({ array[i], array[left], array[right]});
				// cout<<array[i]<<" "<<array[left]<<" "<<array[right]<<endl;
				// return {};
				left++;
				right--;
			}else if(currentSum < targetSum){
				left++;
			}else if(currentSum > targetSum){
				 right--;
			}
		}
	}
	
	return triplets;
}

int main() 
{
	vector<int> array = {12,3,1,2,-6,5,-8,6};
	int targetSum = 0;

	vector<vector<int>> d = threeNumberSum(array,targetSum);

	for(int i=0;i<d.size(); i++) {
      for (int j=0;j<d[i].size(); j++)
        cout << d[i][j] << " "; 
      cout << endl;
   }

	return 0;
} 
