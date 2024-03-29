#include<stdio.h>
#include<string.h>
int top=-1;char stack[100];
void push(char n)
{
    top++;
    stack[top]=n;
}
char pop()
{
    char value=stack[top];
    top--;
    return value;
}

int main()
{
char str[100];
scanf("%s",str);
int m=strlen(str);
for(int i=0;i<m;i++)
{
    if(str[i]=='(' || str[i]=='[' || str[i]=='{')
    push(str[i]);
    else if(str[i]==')' || str[i]==']' || str[i]=='}')
    {
        if(top==-1)
        {
            printf("unbalanced bracket");
        }
        char brac=pop();
        if(str[i]=='(' && brac != ')'||
        str[i]=='[' && brac != ']' ||
        str[i]=='{' && brac != '}'
        )
        {
            printf("unbalanced bracket");
        }
    }
}
if (top==-1)
{
    printf("balanced bracker");
}
else
printf("unbalanced bracket");
}
