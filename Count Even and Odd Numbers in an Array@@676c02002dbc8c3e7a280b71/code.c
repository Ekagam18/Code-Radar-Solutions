// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,c=0,d=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            c+=1;
        }
        else
        {
            d+=1;
        }
    }
    printf("%d %d",c,d);
}