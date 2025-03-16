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
    int a=0,b=0,c=0;
    for(int j=0;j<n;j++)
    {
        if(a[i]!=a[i+1])
        {
            a=a[i];
            b=a[i+1];
        }
        else if(a[i]!=a[i+1] && a[i+1]!=a[i+2])
        {
            b=a[i+1];
            c=a[i+2];
        }
        if(a==a[j])
        {
            printf("%d",a);
        }
    }
}