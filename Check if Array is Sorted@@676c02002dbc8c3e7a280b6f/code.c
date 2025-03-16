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
    for(int j=0;j< n-1;j++)
    {
        if(a[i]> a[i + 1])
        {
            s=0;
            break;
        }
        
    }
    if(s==1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}