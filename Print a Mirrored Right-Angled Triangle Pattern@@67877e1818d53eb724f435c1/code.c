#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k-1;j++)
        {
            printf(" ");
        }
        for(k = 1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}