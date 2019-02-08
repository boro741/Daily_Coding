#include<iostream> 
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std; 


int main() 
{
	vector<int> array {7,6,4,-1,1,2};
	int targetSum = 16;
	unordered_map<int,vector<vector<int>>> allPairSum;
	vector<vector<int>> quadruplets;
	for(int i=1;i<array.size()-1;i++){
		for(int j=i+1;j<array.size();j++){
			int currentSum = array[i] + array[j];
			int difference = targetSum - currentSum;
			if(allPairSum.find(difference) != allPairSum.end()){
				for(vector<int> pairs : allPairSum[difference]){
					pairs.push_back(array[i]);
					pairs.push_back(array[j]);
					quadruplets.push_back(pairs);
				}
			}
		}
		for(int k=0;k<i;k++){
			int currentSum = array[k] + array[i];
			if(allPairSum.find(currentSum) == allPairSum.end()){
				allPairSum[currentSum] = vector<vector<int>> {{array[k],array[i]}};
			} else{
				allPairSum[currentSum].push_back(vector<int> {array[k],array[i]});
			}
		}
	}

	for(int i=0;i<quadruplets.size(); i++) {
      for (int j=0;j<quadruplets[i].size(); j++)
        cout << quadruplets[i][j] << " "; 
      cout << endl;
   }

	return 0;
} 
