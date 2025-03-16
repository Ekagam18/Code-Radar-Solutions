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
    
    }
    for(int j=0;j<n;j++)
    {
     if(m==a[j])
     {
        printf("%d",j);
     }
     else if(m!=a[j])
     {
        printf("-1");
     }
    }
   

}