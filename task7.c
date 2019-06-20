#include <string.h>
#include <stdio.h>
int main()
{
    char c[20];
    int ct = 0;
    printf("Enter the word \n");
    scanf("%s",&c);
    for(int i = 0; i<strlen(c)/2;i++)
    {
        if(c[i]==c[strlen(c)-i-1])
        {
            ct++;
        }
    }
    if(ct == strlen(c)/2)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not Palindrome");
    }
}


    