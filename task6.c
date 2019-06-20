#include <math.h>
#include <stdio.h>
int main()
{
    int num;
    int n;
    int sum = 0;
    int count = 0;
    int c;
    printf("Enter number \n");
    scanf("%d",&n);
    num = n;
    c = n;
    while (num>0)
    {
        num = num/10;
        count++;
    }
    while (n>0)
    {
        sum = sum + pow((n%10),count);
        n = n/10;
    }
    if(c == sum)
    {
        printf("Armstrong!");
    }
    else
    {
        printf("Not Armstrong");
    }
    

}


    