#include <stdio.h>

int sum(int x, int y); // as compiler goes line by line
                        // so to make compiler familer that sum function exist

int main()
{
 
 

  return 0;
}

//    Function types:
//1. with return type and with parameters
//2.  with return type and without parameters
//3.  without return type and with parameters
//4.  without return type and without parameters

// 1. with return type and with parameters
   // sum(2,3)
int sum(int x, int y){ // int x, int y called as formal parameters

//  int result;

//  result = x + y;

 return x+y;
}