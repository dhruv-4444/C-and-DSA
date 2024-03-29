#include <stdio.h>
#include <string.h>

#define MAX 100
int queue[MAX], front = -1, rear = -1;

void enqueue(int x)
{
    if (rear >= MAX - 1)
    {
        printf("full queue");
    }
    else
    {
        front = 0;
    }
    rear++;
    queue[rear] = x;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("empty");
    }
    else
    {
        printf("%d",queue[front]);
        front++;
        
    }
}

int main()
{
    int i;
    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();
    dequeue();
    for (i =front; i <= rear; i++)
    {
        printf("%d",queue[i]);
}
}