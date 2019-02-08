#include<iostream> 
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std; 

int main() 
{
	vector<int> array {1,11,3,0,15,5,2,4,10,7,12,6};
	
	vector<int> bestRange = {};
	int longestLength = 0;
	unordered_map<int,bool> nums = {};
	for(int num : array){
		nums[num] = true;
	}

	for(int num : array){
		if(!nums[num]){
			continue;
		}
		nums[num] = false;
		int currentLength = 1;
		int left = num-1;
		int right = num+1;
		while(nums.find(left) != nums.end()){
			nums[left] = false;
			currentLength++;
			left--;
		}
		while(nums.find(right) != nums.end()){
			nums[right] = false;
			currentLength++;
			right++;
		}

		if(currentLength > longestLength){
			longestLength = currentLength;
			bestRange = {left+1,right-1};
		}
	}	

	cout<<bestRange[0]<<" "<<bestRange[1]<<endl;
	return 0;
} 
