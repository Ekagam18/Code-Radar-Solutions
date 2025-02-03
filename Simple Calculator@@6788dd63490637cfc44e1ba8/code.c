#include <stdio.h>
int main()
{
    float i,j;
    char op;
    scanf("%d %d",&i,&j);
    scanf("%s",&op);
    float d,e,f,g;
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
           printf("%f",e);
           break;
        case '*':
           printf("%f",f);
        
        default:
           printf("error");
    }

}