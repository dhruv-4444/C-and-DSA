#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void abc(struct student);
int main()
{
    struct student s1;
    s1.roll=1508;
    s1.cgpa=9.8;
    strcpy(s1.name,"Dhruv");
    struct student s2;
    s2.roll=1474;
    s2.cgpa=9.2;
    strcpy(s2.name,"Milan");
    abc(s1);
    abc(s2);
    return 0;
}
void abc(struct student s)
{
     printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nAge: %d", s.roll);
   printf("\ncgpa: %0.1f", s.cgpa);
}