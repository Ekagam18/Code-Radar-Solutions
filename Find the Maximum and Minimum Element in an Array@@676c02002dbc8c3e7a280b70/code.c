// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int  max = a[0] ,min = a[0];
    for(int j=0;j<n;j++)
    {
       if(a[j]>max)
      {
        max=a[j];
      }
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]<min)
      {
        min =a[j];
      }
    }
    
   printf("%d %d",min,max);
}