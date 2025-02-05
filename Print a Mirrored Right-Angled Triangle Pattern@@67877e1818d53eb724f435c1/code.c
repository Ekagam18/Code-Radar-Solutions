#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=i;j>=i-1;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}