#include<iostream> 
#include<vector>
#include<unordered_set>
using namespace std; 

int main() 
{
	vector<int> array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int targetSum = 10;


	unordered_set<int> nums;
	for(int num : array){
		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end()){
			if(potentialMatch > num){
				cout<<potentialMatch<< " , "<<num<<endl;
				return 0;
			} else{
				cout<<num<< " , "<<potentialMatch<<endl;
			}
		} else{
			nums.insert(num);
		}
	}
	
	return 0;
} 


/*** Using Left and Right pointers ***/
int main() 
{
	vector<int> array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int targetSum = 10;


	int L = 0, R = array.size()-1;
	int x = 0;

	sort(array.begin(),array.end());

	while(L  < R){
		x = array[L] + array[R];
		if(x == targetSum){
			cout<<array[L]<<" , "<<array[R]<<endl;
			break;
		}else if(x > targetSum)
			R--;
		else if(x < targetSum)
			L++;
	}

	return 0;
} 