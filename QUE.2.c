#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n1,n2,n3;
    printf("Enter Three number");
    scanf("%d %d %d",&n1,&n2,&n3);

    int Largest=n1;
    int Smallest=n1;

    if(n2>Largest)
    Largest=n2;
    if(n3>Largest)
    Largest=n3;

    if(n2<Smallest)
    Smallest=n2;
    if(n3<Smallest)
    Smallest=n3;

    printf("The Largest number is %d\n",Largest);
    printf("The  smallest number is %d\n",Smallest);
    return 0;
}
