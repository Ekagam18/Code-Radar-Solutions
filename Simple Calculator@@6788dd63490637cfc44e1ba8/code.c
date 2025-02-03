#include <stdio.h>
int main()
{
    float i,j;
    char op;
    scanf("%d %d %c ",&i,&j,&op);
    if( op == '+')
    {
        printf("%d", i+j);
    }

}