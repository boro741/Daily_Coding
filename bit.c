#include<stdio.h>

int main()
{
    char sh = 'A';
    sh = sh >> 1;
    
    int x = (int)sh + 35;
    printf("%c\n",x);

    return 0;
}