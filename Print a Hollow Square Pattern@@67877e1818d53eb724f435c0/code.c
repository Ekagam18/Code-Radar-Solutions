#include <stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
            
            if(i>1 && i< l && (j>1 && j<l))
            {
               printf(" ");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
    }
}