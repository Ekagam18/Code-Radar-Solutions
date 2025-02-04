#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=4;j>=4-i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}