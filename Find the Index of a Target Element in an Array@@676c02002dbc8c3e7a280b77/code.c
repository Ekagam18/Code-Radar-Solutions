// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scaf("%d",&n);
    int a[n];
    int i;
    int m;
    scaf("%d",&m);
    for(i=0;i<n;i++)
    {
        scaf("%d"&a[i]);
    }
    if(m==a[i])
    {
        printf("%d",i);
    }

}