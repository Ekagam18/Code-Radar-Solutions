#include <stdio.h>
int main() {
    int j;
    scanf("%d",&j);
    if(j>0)
    {
        printf("Positive");
    }
    else if(j==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
}