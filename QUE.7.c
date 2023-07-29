 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int first=0,second=1;
    int i,next;
    printf("fibonacci sequence:\n");
    for(i=0;i<n;i++){
        if(i<=1)
            next=i;
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d",next);
    }
    return 0;
}
