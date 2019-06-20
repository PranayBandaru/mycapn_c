#include <math.h>
#include <stdio.h>
int main()
{
    int num;
    int ct = 0;
    printf("Enter the number \n");
    scanf("%d",&num);
    for(int i = 0; i<11;i++)
    {
        printf("%d * %d = %d \n",num,i,num*i);
    }
}


    