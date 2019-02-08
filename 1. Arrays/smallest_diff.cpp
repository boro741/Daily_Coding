#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std; 



int main() 
{
	vector<int> a1 = {-1,5,10,20,28,3};
	vector<int> a2 = {26,134,135,15,17};
	
	sort(a1.begin(),a1.end());
	sort(a2.begin(),a2.end());

	int idxOne = 0;
	int idxTwo = 0;

	int smallest = INT_MAX;
	int current = INT_MAX;

	vector<int> smallestPair;

	while(idxOne < a1.size() && idxTwo < a2.size()){
		int firstNum = a1[idxOne];
		int secondNum = a2[idxTwo];
		if(firstNum < secondNum){
			current = secondNum - firstNum;
			idxOne++;
		}else if(secondNum < firstNum){
			current = firstNum - secondNum;
			idxTwo++;
		}else{
			cout<<firstNum<<" "<<secondNum<<endl;
			break;
		}
		if(smallest > current){
			smallest = current;
			smallestPair = {firstNum,secondNum};
		}
	}
	cout<<smallestPair[0]<<" "<<smallestPair[1]<<endl;
	return 0;
} 
