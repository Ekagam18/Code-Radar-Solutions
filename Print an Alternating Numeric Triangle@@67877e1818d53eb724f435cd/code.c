// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        printf(" ");
     for(j=0;j<n;j++)
      {
        printf("%d %d",j-1,j);
      }
    }
   
}