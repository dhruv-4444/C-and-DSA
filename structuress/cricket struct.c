#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer{
        char name[50];
        int age;
        int number;
        float avg_runs;

    }cr;

    cr arr[3];
    for(int i=0;i<3;i++)
    {
        
        scanf(" %s",arr[i].name);
        
        scanf(" %d",&arr[i].age);
      
        scanf(" %d",&arr[i].number);
        
        scanf(" %f",&arr[i].avg_runs);
    }

    for(int i=0;i<3;i++)
    {
        printf("name %s\n",arr[i].name);
        printf("age %d\n",arr[i].age);
       printf ("number %d\n",arr[i].number);
       printf("avg runs %f\n",arr[i].avg_runs);
       printf("\n\n");
       
    }
}