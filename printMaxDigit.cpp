#include<iostream>
#include <vector>

using namespace std;

int printMaxNum(int num){
    
    int count[10] = {0};
    
    string str = to_string(num);
    
    for(int i=0;i<str.length();i++)
        count[str[i]-'0']++;   // str[i] - '0' gives the int value not ASCII value.
    
    int result = 0, multiplier = 1;
    
    int c = 0;
    // Traversing the count array
    // to calculate the maximum number
    for (int i = 0; i <= 9; i++)
    {
        while (count[i] > 0)
        {
            result = result + (i * multiplier);
            count[i]--;
            multiplier = multiplier * 10;
            c++;
        }
    }
    
    cout<<"c: "<<c<<endl;
    // return the result
    return result;
}

int main()
{
    int num = 38293367;
    cout << printMaxNum(num)<<endl;
    return 0;
}
