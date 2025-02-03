#include <stdio.h>
int main()
{
    float i,j;
    char op;
    if(scanf("%d %d %c ",&i,&j,&op)!= 3)
    {
        printf("error\n");
        return 1;
    }
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