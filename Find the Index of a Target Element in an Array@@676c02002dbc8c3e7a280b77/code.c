// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         if(m==a[i])
    {
        printf("%d",i);
    }
    }
   

}