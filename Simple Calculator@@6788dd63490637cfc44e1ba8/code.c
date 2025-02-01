#include <stdio.h>
int main()
{
    int i,j;
    char a[10];
    scanf("%d %d",&i,&j);
    scanf("%c",&a);
    int d,e,f,g;
    d = i + j;
    e = i - j;
    f = i * j;
    g = i / j;
    switch(a)
    {
        case'+':
          printf("%d",d);
          break;

        case'-':
           printf("%d",e);
           break;
        
        default:
           printf("error");
    }

}