#include <math.h>
#include <stdio.h>
int main()
{
    float temp;
    int c;
    printf("Enter 1 for Celsius to Farenheit, 2 for Farenheit to Celsius and 3 to exit \n");
    scanf("%d",&c);
    
    switch (c)
    {
    case 1: printf("Enter temperature in celsius \n");
            scanf("%f",&temp);
            printf("Temperature in celsius = %f",(1.8*temp)+32);
            break;
    
    case 2: printf("Enter temperature in Farenheit\n");
            scanf("%f",&temp);
            printf("Temperature in celsius = %f",0.55*temp+32);
            break;
    case 3:
        break;
    }
}


    