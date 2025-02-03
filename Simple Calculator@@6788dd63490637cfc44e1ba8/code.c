#include <stdio.h>
int main()
{
    int i,j;
    char op;
    scanf("%d %d",&i,&j);
    scanf("%s",&op);
    int d,e,f,g;
    d = i + j;
    e = i - j;
    f = i * j;
    g = i / j;
    switch(op)
    {
        case '+':
          printf("%d",d);
          break;

        case '-':
           printf("%d",e);
           break;
        case '*':
           printf("%d",f);
        
        default:
           printf("error");
    }

}