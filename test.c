#include<stdio.h>
#include<string.h>

#define MIN(a,b) (((a)<(b))?(a):(b))


int main()
{
    static char *s[] = {"black","white","pink","violet"};
    char **ptr[] = {s+3,s+2,s+1,s}, ***p;
    p = ptr;
    ++p;
    printf("%s ",**p+3);
    return 0;
}