#include <stdio.h>
int main()
{
    int i,j;
    char a[2];
    int d,e,f,g;
    scanf("%d %d",&i,&j);
    scanf("%c",&a);
    d = i + j;
    e = i - j;
    f = i * j;
    g = i / j;
    if(a == "+")
    {
        printf("%d",d);
    }
    else if(a == "-")
    {
        printf("%d",e);
    }
    else if(a == "*")
    {
        printf("%d",f);
    }
    else if(a == "/")
    {
        printf("%d",g);
    }

}