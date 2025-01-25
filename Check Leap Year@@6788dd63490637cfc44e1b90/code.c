#include <stdio.h>

int main() {
   int i;
   scanf("%d",&i);
   if(i%4==0 && i>1900)
   {
    printf("Leap Year");
   }
   else
   {
    printf("Not a Leap Year");
   }
}