int main()
{
    int armsnum(int number);
    int orinum,remainder,result=0,n=0;
    orinum=number;
    while (orinum!=0){
            orinum/=10;
            n++;
    }
    orinum=number;
    while (orinum!=0){
        remainder=orinum%10;
        result+=pow(remainder,n);
        orinum/=10;
    }
    if(result ==number)
        return 1;
    else
        return 0;
    }
    int main(){
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if(armsnum(number))
        printf("%d is an Armstrong number.\n",number);
        elseprintf("%d is not an Armstrong number.\n",number);
        return 0;
    }
