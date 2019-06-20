#include<stdio.h>
int main()
{
    float ctemp;
    printf("Enter the temperature in celsius \n");
    scanf("%f",&ctemp);
    ctemp = ctemp*9/5;
    printf("Temperature in farenheit = %f",ctemp+32);
} 