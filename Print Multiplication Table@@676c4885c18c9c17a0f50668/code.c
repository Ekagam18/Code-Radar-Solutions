// Your code here...
#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        c = n*i;
        printf("%d x %d = %d \n",n,i,c);
    }
}