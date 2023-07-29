#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is an even number\n",num);
    }else{
    printf("%d is an odd number\n",num);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    switch(num%2){
        case 0:
        printf("%d is an even number\n",num);
    break;
        case 1:
        case-1:
        printf("%d is an odd number\n",num);
        break;
    }
    return 0;
}
