#include <stdio.h>
int main() {
   int i,j;
   scanf("%d %d",&i,&j);
   if(i>j)
   {
    printf("Profit");
   }
   else if(i==j)
   {
    printf("No Profit No Loss");
   }
   else
   {
    printf("Loss");
   }
}