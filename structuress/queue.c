// #include<stdio.h>
// #include<string.h>
// #define MAX 100
// int que[MAX],front=-1,rear=-1;
// void enque(int n)
// {
//     if (rear>=MAX-1)
//     {
//         printf("full");
//     }
//     else{
//         front=0;
//     }
//     rear++;
//     que[rear]=n;
// }
// int main()
// {
//     enque(20);
//     enque(30);
//     enque(40);
//     for(int i=0;i<=rear;i++)
//     {
//         printf("%d ",que[i]);
//     }
// }
#include<stdio.h>
#include<string.h>
int que[100],f=-1,e=-1;
void enque(int n)
{
    if(e>=100-1)
    printf("full");
    else
    {
        f=0;
    }
    e++;
    que[e]=n;
}
    int main()
    {
        enque(12);
        enque(45);
        enque(35);
        for(int i=0;i<=e;i++)
        {
            printf("%d \n",que[i]);
        }
    }

