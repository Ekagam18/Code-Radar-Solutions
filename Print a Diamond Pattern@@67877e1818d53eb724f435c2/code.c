// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i+2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}