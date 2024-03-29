// #include<stdio.h>
// #include<string.h>
// int top,stack[100];
// void push(int n)
// {
//     if (top>=-1)
//     {
//         printf("full");
//     }
//     else{
//         top++;
//         stack[top]=n;
//     }
// }
// void pop()
// {
//     top--;
//     printf("%c",stack[top]);
// }
// int main()
// {
//  top=-1;
//  char str[20];
//  fgets(str,20,stdin);
//  int n=strlen(str);
//  for(int i=0;i<n;i++)
//  push(str[i]);
//  for(int i=0;i<n;i++)
//  pop(str[i]);
// }

#include<stdio.h>
#include<string.h>
int top;int stack[100];
void push(int n)
{
    if(top>=20-1)
    {
        printf("full");
    }
    else
    {
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
    fgets(str,20,stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        push(str[i]);
    }
    for(int i=0;i<l;i++)
    {
        pop();
    }
}