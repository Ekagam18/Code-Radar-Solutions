// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,s=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i< n-1;i++)
    {
        if(a[i]> a[i + 1])
        {
            s=0;
            break;
        }
        
    }
    if(s)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}