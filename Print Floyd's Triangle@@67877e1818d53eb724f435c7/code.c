// Your code here...
#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int i,j;
    num=1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
       
        printf("\n");
    }
}