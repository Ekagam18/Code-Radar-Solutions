// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=n;i>0;i--)
    {
        for(char ch='A';ch< 'A'+i;i++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}