#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter the first integer");
    scanf("%d",&n1);
    printf("Enter the second integer");
    scanf("%d",&n2);
    if(n1%n2==0)
    printf("%d is a multiple of %d\n",n1,n2);
    else
    printf("%d is not a multiple of %d\n",n1,n2);
    return 0;
}
