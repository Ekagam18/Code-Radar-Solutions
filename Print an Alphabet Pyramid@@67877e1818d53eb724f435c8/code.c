// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(char ch='A';ch <'A'+i;ch++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}