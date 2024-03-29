#include<stdio.h>
#include<string.h>
typedef struct student{
    int rollno;
    char name[15];
    char department[15];
    char course[15];
    int yearofjoin;
}student;
void fun(student s3,student s4)
{
   if(strcmp(s3.department,s4.department) ==0)
   printf("yes");
   else
   printf("no");
   return;
}
int main(){
    student s1;
    student s2;
    s1.rollno=1;
    strcpy(s1.name,"dhruv");
    strcpy(s1.department,"cse");
    strcpy(s1.course,"be");
    s1.yearofjoin=2022;
    s2=s1;
    s2.rollno=2;
    strcpy(s2.name,"aakash");
    fun(s1,s2);
}