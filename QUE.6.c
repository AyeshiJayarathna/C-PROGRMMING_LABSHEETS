#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[20];
   int byear,age;
    printf("Enter stu name:");
    scanf("%s",&name);
    printf("Enter stu birth year:");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Name is:%s\n",name);
    printf("age is:%d\n",age);
  return 0;
}
