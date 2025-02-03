#include <stdio.h>
int main()
{
    float i,j;
    char op;
    if(scanf("%d %d %c ",&i,&j,&op)!= 3)
    {
        printf("error");
        return 1;
    }
    switch(op)
    {
        case'+':
          printf("%d",i + j);
          break;
        case'-':
           printf("%d",i - j);
           break;
        case'*':
           printf("%d",i*j);
           break;
        case'/':
           if(num ==0)
           {
            printf("error");
           }
           else
           {
            printf("%d", i / j);
           }
        
        default:
           printf("error");
           break;
    }

}