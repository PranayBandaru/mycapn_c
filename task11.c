#include <math.h>
#include <stdio.h>
struct book
{
    char title[50];
    char author[40];
    char genre [20]; 
};
int scn(struct book *b1)
{
    printf("Enter the name of the book \n");
    scanf("%s",&b1->title);
    printf("Enter the name of the author \n");
    scanf("%s",&b1->author);
    printf("Enter the genre \n");
    scanf("%s",&b1->genre);
}
int prnt(struct book b1)
{
    printf("Book name : %s \nAuthor : %s \nGenre : %s",b1.title,b1.author,b1.genre);
}
int main()
{
    struct book b1;
    scn(&b1);
    prnt(b1);
}


    