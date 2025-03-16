// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    int max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    max=a[0];
    for(j=1;j<n;j++)
    {
      if(a[j]>max)
      {
        max=a[j];
        break;
      }
    }
   printf("%d",max);
}