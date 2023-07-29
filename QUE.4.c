 #include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    printf("Enter a character");
    scanf("%c",&letter);
    switch (letter){
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    printf("%c is a vowel.\n");
    break;
    default:
        printf("%c is not a vowel.\n",letter);
        break;
    }
    return 0;
}
