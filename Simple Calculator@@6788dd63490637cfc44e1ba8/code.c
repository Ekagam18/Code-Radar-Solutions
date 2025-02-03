#include <stdio.h>
int main()
{
    float i,j;
    char op;
    scanf("%d %d",&i,&j);
    scanf("%s",&op);
    float d,e,f,g;
    d= i+j;
    e= i-j;
    f= i*j;
    g= i/j;
    printf("%d",d);
    switch(op)
    {
        case'+':
          printf("%d",i+j);
          break;

        case'-':
           printf("%d",e);
           break;
        case'*':
           printf("%d",f);
           break;
        case'/':
           printf("%d",g);
           break;
        
        default:
           printf("error");
           break;
    }

}