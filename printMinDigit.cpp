#include<iostream>
#include <vector>

using namespace std;

int smallest(int num){
    
    int count[10] = {0};
    
    string str = to_string(num);
    
    for(int i=0;i<str.length();i++)
        count[str[i]-'0']++;
    
    int result = 0;
    
     // Set the LEFTMOST digit to minimum except 0
    for (int i = 1 ; i <= 9 ; i++)
    {
        if (count[i] > 0)
        {
            result = i;
            count[i]--;
            break;
        }
    }
    
    
    // arrange all remaining digits
    // in ascending order
    for (int i = 0 ; i <= 9 ; i++)
        while (count[i] > 0){
            result = result * 10 + i;
            count[i]--;
        }
    
    return result;
}

int main()
{
    int num = 570107;
    cout << smallest(num);
    return 0;
}
