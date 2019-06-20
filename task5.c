
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number \n");
    scanf("%d",&num);
    while (num>0)
    {
        printf("%d",num%10);
        num = num/10;
    }
}
    