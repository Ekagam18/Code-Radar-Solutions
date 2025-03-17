// Your code here...
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[30];
        scanf("%s",&a);
        float m;
        scanf("%f",&m);
        float k=0;
        k += m;
        float j= k/t;
        printf("%f",j);
    }
}