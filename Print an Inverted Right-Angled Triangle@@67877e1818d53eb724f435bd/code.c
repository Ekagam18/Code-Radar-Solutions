#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=7;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}