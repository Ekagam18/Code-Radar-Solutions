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
    for(int j=0;j< n;j--)
    {
        if(a[i]> a[i + 1])
        {
            s=0;
            break;
        }
        else
        {
            s=1;
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