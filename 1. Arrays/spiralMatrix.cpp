#include <iostream>
#include <vector>

using namespace std;

void printSpiral(vector<vector<int>> &v){
    int T = 0;
    int B = v.size() - 1; // Column Size
    int L = 0;
    int R = v[0].size() - 1;    // Row Size

    int dir = 0;
    
    /*
        dir = 0;  left to right
        dir = 1;  top to bottom
        dir = 2;  right to left
        dir = 3;  bottom to top
    */

    while(T <= B && L <= R){
        if(dir == 0){
            for(int i = L;i <= R;i++)
                cout<<v[T][i]<<" ";
            T++;
            dir = 1;
        } else if(dir == 1){
            for(int i = T;i <= B;i++)
                cout<<v[i][R]<<" ";
            R--;
            dir = 2;
        } else if(dir == 2){
            for(int i = R;i >= L ;i--)
                cout<<v[B][i]<<" ";
            B--;
            dir = 3;
        }  else if(dir == 3){
            for(int i = B;i >= T ;i--)
                cout<<v[i][L]<<" ";
            L++;
            dir = 0;
        } 

       // dir = (dir + 1) % 4;
    }

}

int main() {
                         // T, L 
    vector<vector<int>> v = { {2,4,6,8}, // R
                              {5,9,12,16}, 
                              {2,11,5,9}, 
                              {3,2,1,8} };
                        //  B
    printSpiral(v);

    return 0;
}