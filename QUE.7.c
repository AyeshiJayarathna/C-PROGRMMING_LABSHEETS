
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,valu;
   printf("Enter 1st num");
   scanf("%d",&n1);
   printf("Enter 2nd num");
   scanf("%d",&n2);
   valu=n1;
   n1=n2;
   n2=valu;
   printf("swapped valu:\n");
   printf("1st num is%d\n",n1);
   printf("2nd num is%d\n",n2);
  return 0;
}
