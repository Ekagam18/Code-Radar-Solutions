// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>n-i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i+1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}