#include <math.h>
#include <stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf("Enter the number \n");
    scanf("%d",&num);
    printf("Factorial of %d =",num);
    while(num>0)
    {
        fact = fact*num;
        num--;
    }
printf(" %d",fact);
}


    