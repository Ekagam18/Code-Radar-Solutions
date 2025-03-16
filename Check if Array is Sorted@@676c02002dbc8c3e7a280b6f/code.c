// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int j=0;j<n-1;j--)
    {
        if(a[i]>a[i+1])
        {
            s=1;
        }
        else
        {
            s=0;
        }
    }
    if(s==0)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}