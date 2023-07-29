
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bs,ms,addiallownce=0,bonus=0,grossremuneration;
    char city;
    printf("Enter basic salary:");
    scanf("%f",&bs);
    printf("Enter month sales:");
    scanf("%f",&ms);
    printf("Enter the city(c for colombo,any other character for other cities):");
    scanf("%c",&city);
    if (ms>=0&&ms<=25000)
        bonus=0.10*ms;
    else if(ms>25000 && ms<=50000)
        bonus=0.12*ms;
    else if(ms>50000)
        bonus=0.15*ms;
    if(city=='c')
        addiallownce=2500;
    grossremuneration=bs+addiallownce+bonus;
    printf("grossremuneration:%.2f\n",grossremuneration);
    return 0;
}
