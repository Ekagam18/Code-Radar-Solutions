#include <stdio.h>
int main()
{
    char a[1];
    scanf("%c",&a);
    if(a>="A" && a<="Z")
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
}