 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int prices[10];
    float sum=0;
    int count=0;
    printf("Enter the prices of 10 items:\n");
    for(int i=0;i<10;i++){
        printf("item %d:",i+1);
        scanf("f",&prices[i]);
        sum+=prices[i];
        if(prices[i]>200){
            count++;
        }
    }
    float average=sum/10;
    printf("\nAverage value of item%.2f\n",average);
    printf("number of items with price greater than 200%d\n",count);
    return 0;
}

