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
    int c=-1,d=0;
    for(int j=0;j<n;j++)
    {
        if(d==0)
        {
            c=a[i];
            d=1;
        }
        else
        {
            d--;
        }
    }
}