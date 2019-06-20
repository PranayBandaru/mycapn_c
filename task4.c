
#include<stdio.h>
#include <string.h>
int main()
{
    char fn[10];
    char ln[10];
    printf("Enter first name \n");
    scanf("%s",&fn);
    printf("Enter last name \n");
    scanf("%s",&ln);
    strcat(fn,ln);
    printf("Name = %s \n",fn);
    } 