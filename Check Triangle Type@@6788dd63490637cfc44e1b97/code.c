#include <stdio.h>
int main() {
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i==j &&j==k)
    {
        printf("Equilateral");
    }
    else if(i==j || j==k || k==i)
    {
        printf("Isosceles");
    }
    else
    {
       printf("Scalene");
    }
}