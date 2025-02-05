#include <stdio.h>
int main()
{
    int i,j,k,m;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k-1;j++)
        {
            printf(" ");
        }
        for(m = 1;m<=i;m++){
            printf("*");
        }
        printf("\n");
    }
}