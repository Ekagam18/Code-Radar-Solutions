#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j<=n-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}