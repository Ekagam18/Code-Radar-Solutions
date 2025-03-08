// Your code here...
#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
             printf("%d",j+1);
        }
       
        printf("\n");
    }
}