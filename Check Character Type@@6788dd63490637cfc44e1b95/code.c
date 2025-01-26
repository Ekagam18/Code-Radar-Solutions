#include <stdio.h>
int main() {
    string ch;
    scanf("%s",&ch);
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch== 'u')
    { 
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}