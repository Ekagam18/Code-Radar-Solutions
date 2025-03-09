// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int msb = 1 << 31;
    if(n & msb)
    {
        printf("Set\n");
    }
    else
    {
        printf("Not Set\n");
    }
}