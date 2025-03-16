// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int b=0,c=0,d=0;
    for(int j=0;j<n;j++)
    {
        if(a[i]!=a[i+1])
        {
            b=a[i];
            c=a[i+1];
        }
        else if(a[i]!=a[i+1] && a[i+1]!=a[i+2])
        {
            c=a[i+1];
            d=a[i+2];
        }
        if(b==a[j])
        {
            printf("%d",b);
        }
    }
}