#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    int m,n,l;
    m = i*i;
    n = j*j;
    l = k*k;
    if(m+n ==l)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}