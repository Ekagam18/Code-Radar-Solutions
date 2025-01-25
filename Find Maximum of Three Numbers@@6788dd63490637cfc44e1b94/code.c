#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    int n,m;
    n = max(i,j);
    m = max(n,k);
    printf("%d",m);
}