#include<stdio.h>
int main()
{
    int age;
    char name[20];
    char numb[10];
    printf("Enter your name \n");
    scanf("%s",&name);
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("Enter your phone number \n");
    scanf("%s",&numb);
    printf("Name: %s \t age: %d \t Phone number: %s",name,age,numb);
} 