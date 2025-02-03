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
    if( op =="+")
    {
        printf("%d", i+j);
    }

}