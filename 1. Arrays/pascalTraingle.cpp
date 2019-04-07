#include <iostream>
using namespace std;

int main() {
	//code
      
    int n = 4;
    int c = 1;
    
    for(int i = 1; i <= n; i++) {
        cout << c << " ";
        c = c * (n-i) / i;
    }
    
    cout << endl;

	return 0;
}