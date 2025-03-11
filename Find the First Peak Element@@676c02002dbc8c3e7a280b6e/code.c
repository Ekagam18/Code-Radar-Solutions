// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    if(a[0]>max)
    {
        printf("%d",a[0]);
    }
}