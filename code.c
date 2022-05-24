#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a;
    scanf("%c", &a);
    

    switch (a)
    {
    case 'a':
        printf("Vowels");
         break;
    case 'e':
        printf("Vowels");
         break;
    case 'i':
        printf("Vowels");
         break;
    case 'o':
        printf("Vowels");
         break;
    case 'u':
        printf("Vowels");
         break;

    default:
        printf("consonants");
        break;
    }
    return 0;
}
