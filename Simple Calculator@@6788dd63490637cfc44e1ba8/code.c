#include <stdio.h>
int main()
{
    float i,j;
    char op;
    if(scanf("%d %d %c ",&i,&j,&op)!=3)
    {
        printf("error\n");
        return 1;
    }
    switch(op)
    {
        case'+':
          printf("%d",i + j);
          break;
        case'-':
           printf("%d",i-j);
           break;
        case'*':
           printf("%d",i*j);
           break;
        case'/':
           printf("%d",i/j);
           break;
        
        default:
           printf("error");
           break;
    }

}