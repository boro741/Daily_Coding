#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v,int key){
    int l = 0;
    int h = v.size() - 1;
    int mid;

    while(l <= h){
        mid = (l + h)/2;
        if(key == v[mid])
            return mid;
        else if(key < v[mid])
            h = mid-1;
        else
            l = mid+1;
    }

    return -1;
}

int main() {

    vector<int> v {1,2,3,4,5};

    cout<<binarySearch(v,5)<<endl;
    

    return 0;
}
