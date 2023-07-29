
  #include<stdio.h>
int main(){
int numbers[10];
int positivecount=0;
int negativecount=0;
int zerocount=0;
printf("Enter 10 numbers\n");
for(int i=0;i<10;i++){
printf("numbers%d",i+1);
scanf("%d",&numbers[i]);
}
for(int i=0;i<10;i++){
if(numbers[i]>0)
positivecount++;
else if(numbers[i]<0)
negativecount++;
else
zerocount++;
}
printf("\nNumber of positive numbers%d\n",positivecount);
printf("\nNumber of negative numbers%d\n",negativecount);
printf("\nNumber of zros%d\n",zerocount);
return 0;
}
