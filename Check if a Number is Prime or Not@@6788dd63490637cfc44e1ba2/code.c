#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    for(i=2;i<=j-1;i=i+1)
    {
        if(j%i==0)
        {
            printf("Not Prime");
        }
        else
        {
            printf("Prime");
        }
    }
}