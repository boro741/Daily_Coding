#include <iostream>
#include <vector>

using namespace std;

int shortestPath(int x1,int y1, int x2,int y2){
    int dx = abs(x1-x2);
    int dy = abs(y1-y2);
    
    return max(dx,dy);
}

int coverPoints(vector<int> &A, vector<int> &B) {
    int stepCount = 0;
    
    for(int i=0;i<A.size()-1;i++){
        stepCount += shortestPath(A[i],B[i],A[i+1],B[i+1]); 
    }
    
    return stepCount;
}


int main() {
    
    vector<int> A {0,1,1};
    vector<int> B {0,1,2};

    int res = coverPoints(A,B);

    cout<<res<<endl;

    return 0;
}