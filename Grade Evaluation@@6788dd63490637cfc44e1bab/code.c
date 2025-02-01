#include <stdio.h>
int main()
{
    char ch[2];
    scanf("%c",&ch);
    if(ch == "A")
    {
        printf("Excellent");
    }
    else if(ch =="B")
    {
        printf("Good");
    }
    else if(a == "C")
    {
        printf("Average");
    }
    else if(a == "D")
    {
        printf("Below Average");
    }
    else if(a=="F")
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid grade");
    }
}