#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i>=3 && i<=7 )
    {
        if(i%2==0)
        {
            printf("30");
        }
        else
        {
            printf("31");
        }
    }
    else if(i==1)
    {
        printf("31");
    }
    else if(i==2)
    {
       printf("28");
    }
    else if(i>=8 && i<=12)
    {
        if(i%2==0)
        {
            printf("31");
        }
        else
        {
            printf("30");
        }
    }
}