#include <stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=k;j>=i;j--)
        {
           printf(" ");
        }
        for(l=1;l<=2*i-1;l++)
           {
                printf("*");
           }
        printf("\n");
    }
}