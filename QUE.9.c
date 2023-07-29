#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    printf("Ascii values for letters A to Z:\n");
    for(letter='A';letter<='Z';letter++){
        printf("%c:%d\n",letter,letter);
    }
    return 0;
}
