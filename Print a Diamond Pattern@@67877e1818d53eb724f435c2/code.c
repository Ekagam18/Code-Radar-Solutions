// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}