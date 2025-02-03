#include <stdio.h>
int main()
{
    int i,j;
    char op;
    scanf("%d %d %c ",&i,&j,&op);
    if( op == '+')
    {
        printf("%d", i+j);
    }
    else if( op =='-')
    {
        printf("%d" , i-j);
    }
    else if( op == '*')
    {
        printf("%d", i*j);
    }
    else if( op == '/')
    {
        printf("%d", i/j);
    }
    else
    {
        printf("error");
    }

}