#include<stdio.h>
#include<string.h>
int top,stack[100];

void push (char n)
{
    if(top>=19)
    {
        printf("full");
    }
    else{
        top++;
        stack[top]=n;
    }
}
void pop()
{
    top--;
    printf("%c",stack[top]);
}

int main()
{
top=-1;
char str[20];
scanf("%[^\n]s",str);
int l=strlen(str);
for(int i=0;i<=l;i++)
{
    push(str[i]);
}
for(int i=0;i<l;i++)
{
pop();
}
}