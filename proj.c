#include <stdio.h>
#include <string.h>
struct contact
{
    char number[11];
    char name[40];
};

int main()
{  
    char crit[40];
    int nf =0;
    char deln[40];
    int i =1;
    int choice,c2;
    int sno = 0;
    struct contact c[100];
    while(i>0)
    {
        printf("Enter 1 to add contact to database 2 to delete contact, 3 to search for contacts \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("Enter the name of the contact \n");
                     scanf("%s", c[sno].name);
                     printf("Enter the phone number of the contact \n");
                     scanf("%s", c[sno].number);
                     break;

            case 2 : printf("Enter The name of contact to be deleted \n");
                     scanf("%s",&deln);
                     for(int s = 0; s<100; s++)
                     {
                        if(strcmp(c[s].name,deln) == 0)
                            {
                             printf("The phone number of %s is %s \n",deln,c[s].number);
                             *c[s].name = '-';
                             *c[s].number = '-';
                             printf("CONTACT DELETED \n");
                             }
                    }
                     break;
            
            case 3 : printf("Enter The name of contact to be searched \n");
                     scanf("%s",&crit);
                     for(int s = 0; s<100; s++)
                    {   
                        if(strcmp(c[s].name,crit) == 0)
                        {   
                            printf("The phone number of %s is %s \n",crit,c[s].number);
                        }                    
                    }
                    if (nf == 0)
                    {
                        printf("NOT FOUND \n");
                    }
                    break;
        }
    printf("Enter 1 to add or remove or search \n       OR \nEnter 0 to quit");
    scanf("%d",&c2);
    if(c2 == 0)
    {
        break;
    }
    if(c2 == 1)
    {
        sno++;
    }
    else
    {
        printf("ERROR\n");
    }
    }
}
