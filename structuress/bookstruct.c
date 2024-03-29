#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[50];
        float price;
        int pages;
    }a,b,c;

    a.pages=100;
    a.price=411.5;
    strcpy(a.name,"secret seven");
    // a.name="secret seven";

    /*in c we cannot declare and then initalize a string later we have to declare and initialize at the same place or if dont want like this then we have to enter string letter by letter this is the problem in c 
    char name[50];
    name="secret seven"
    we cannot do like this


     char name[]="secret seven" we have to do like this

     to avoid such type of problem we will use 
     strcpy(name,"secret seven")
     */
     

    printf("%d\n",a.pages);
    printf("%s\n",a.name);
    printf("%0.01f",a.price);






    return 0;
}