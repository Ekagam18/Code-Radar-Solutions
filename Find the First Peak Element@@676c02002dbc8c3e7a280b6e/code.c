// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    max=a[0];
    if(a[i]>max)
    {
        max=a[i];
        printf("%d",max);
    }
}