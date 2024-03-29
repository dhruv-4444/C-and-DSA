#include<stdio.h>
int main()
// typedef oldname newname;
{
   typedef struct booklibrary{
    char name[50];
    int pages;
    float price;
   } book;


book a;
strcpy(a.name,"abc");
a.price=41.02;
a.pages=52;

printf("%d",a.pages);
}