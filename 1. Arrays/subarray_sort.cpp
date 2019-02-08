#include<iostream> 
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std; 

bool isOutOfOrder(int i,int num,vector<int> array){
	if(i == 0)
		return num > array[i+1];
	if(i == array.size() - 1)
		return num < array[i-1];
	return num > array[i+1] || num < array[i-1];
}

int main() 
{
	vector<int> array {1,2,4,7,10,11,7,12,6,7,16,18,19};
	
	int minOutOfOrder = INT_MAX;
	int maxOutOfOrder = INT_MIN;

	for(int i=0;i<array.size();i++){
		int num = array[i];
		if(isOutOfOrder(i,num,array)){
			minOutOfOrder = min(minOutOfOrder,num);
			maxOutOfOrder = max(maxOutOfOrder,num);
		}
	}

	if(minOutOfOrder == INT_MAX){
		//return vector<int> {-1,-1};
		cout<<"-1 , -1"<<endl;
	}

	int subarrayLeftIdx = 0;
	while(minOutOfOrder >= array[subarrayLeftIdx])
		subarrayLeftIdx++;
	
	int subarrayRightIdx = array.size() - 1;
	while(maxOutOfOrder <= array[subarrayRightIdx])
		subarrayRightIdx--;
	
	cout<<subarrayLeftIdx<<" "<<subarrayRightIdx<<endl;

	return 0;
} 
