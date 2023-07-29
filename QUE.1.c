
 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter first number");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);

    if(n1>n2)
    {
    printf("The highest number is %d\n",n1);
    }else{
    printf("The highest number is %d\n",n2);

    return 0;
}
