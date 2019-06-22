#include <math.h>
#include <stdio.h>
int main()
{
    int arr[10];
    int min = 99999;
    int max = 0;
    printf("Enter numbers in the array followed by enter \n");
    for(int q=0; q<10;q++)
    {
        scanf("%d",&arr[q]);
    }
    for(int i = 0; i<10; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for (int j =0; j<10;j++)
    {
        if(arr[j]<min)
        {
            min = arr[j];
        }
    }
    printf("Max = %d \nMin = %d",max,min);
}


    