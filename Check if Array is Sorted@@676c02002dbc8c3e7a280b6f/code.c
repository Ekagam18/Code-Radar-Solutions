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
        if(a[0]<a[i])
        {
            a[0]=a[i];
            printf("Sorted");
        }
        else
        {
            printf("Not Sorted");
        }
        
    }
    
}