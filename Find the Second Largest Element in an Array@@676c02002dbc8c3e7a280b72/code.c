// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,c=0,d=0;
    for(i=0;i<n;i++)
    {
        if(c<a[i])
        {
            d=c;
            c=a[i];
        }
        else
        {
            if(d<a[j])
            {
                d=a[i];
            }
        }
    }
    printf("%d",d);
}