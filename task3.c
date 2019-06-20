#include<stdio.h>
int main()
{
    int m1;
    int m2;
    int m3;
    printf("Enter first subject marks \n");
    scanf("%d",&m1);
    printf("Enter second subject marks \n");
    scanf("%d",&m2);
    printf("Enter third subject marks \n");
    scanf("%d",&m3);
    printf("Sum = %d \n",m1+m2+m3);
    printf("Average = %d",(m1+m2+m3)/3);
} 