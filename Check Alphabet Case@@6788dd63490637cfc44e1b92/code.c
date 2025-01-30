#include <stdio.h>
int main()
{
    char a[1];
    scanf("%c",&a);
    if(isupper(a))
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
}