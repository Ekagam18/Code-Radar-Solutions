#include <stdio.h>
int main()
{
    int i,j;
    int c=0;
    scanf("%d",&j);
    for(i=2;i<=j-1;i=i+1)
    {
        if(j%i==0)
        {
           c=1;
        }
       
    }
    if(c==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}