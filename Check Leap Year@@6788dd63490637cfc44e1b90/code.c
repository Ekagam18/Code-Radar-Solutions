#include <stdio.h>

int main() {
   int i;
   scanf("%d",&i);
   if(i%4==0 && i>2000)
   {
    printf("Leap Year");
   }
   else
   {
    printf("Not a Leap Year");
   }
}