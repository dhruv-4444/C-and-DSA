#include <stdio.h>
#include <string.h>
#define MAX 100
int stack[MAX];
int Top = -1, n, i = 0, num = 0;

void push(int x)
{
    Top++;
    stack[Top] = x;
}
int pop()
{
    int val = stack[Top];
    Top--;
    return val;
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);

    int a = strlen(str);
    for (int i =0; i <a; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int num = str[i] - '0';
            push(num);
           // printf("%d",num);
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
           // printf("%c",str[i]);
            int o2 = pop();
            int o1 = pop();
            if (str[i] == '+')
            {
                 n = o1+o2;
            }
            else if (str[i] == '*')
            {
                 n = o1*o2;
            }
            else if (str[i] == '-')
            {
                 n = o1-o2;
            }
            else if (str[i] == '/')
            {
                 n = o1/o2;
            }
            push(n);
        }
    }
printf("%d",pop());
}