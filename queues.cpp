#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
        // Implement the Constructor
    }
    /*----------------- Public Functions of Queue -----------------*/
    bool isEmpty()
    {
        if (qfront == rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        // Implement the isEmpty() function
    }
    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (rear == size)
            cout << "queue is full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
        // Implement the dequeue() function
    }
    int front()
    {
        // Implement the front() function
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};