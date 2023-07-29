 #include <stdio.h>
#include <stdlib.h>

int main()
{
    char uppercaseletters[]="ABC";
    char lowercaseletters[]="abc";
    char digits[]="012";
    char specialsymbols[]="$*+/";

    printf("integer equivalents of uppercase letters:\n");
    for(int i=0;i<sizeof(uppercaseletters)-1;i++){
        printf("%c:%d\n",uppercaseletters[i],(int)uppercaseletters[i]);
        }
         printf("\ninteger equivalents of lowercase letters:\n");
    for(int i=0;i<sizeof(lowercaseletters)-1;i++){
        printf("%c:%d\n",lowercaseletters[i],(int)lowercaseletters[i]);
        }
        printf("\ninteger equivalents of digits:\n");
    for(int i=0;i<sizeof(digits)-1;i++){
        printf("%c:%d\n",digits[i],(int)digits[i]);
        }
           printf("\ninteger equivalents of special symbols:\n");
    for(int i=0;i<sizeof(specialsymbols)-1;i++){
        printf("%c:%d\n",specialsymbols[i],(int)specialsymbols[i]);
        }
    return 0;
}
