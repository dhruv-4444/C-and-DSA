// #include<stdio.h>
// #include<string.h>
// int stack[100], top, ssize=10;
// void push(int n)
// {
//     if(top>=ssize-1)
//     {
//         printf("full\n");
//     }
//     else{
//         top++;
//         stack[top]=n;
//     }
// }
// void pop(){
//     if(top<=-1)
//     {
//         printf("empty");
//     }
//     else{
//         top--;
//     }
// }
// void isempty()
// {
//     if(top<=-1)
//     {
//         printf("empty");
//     }
//     else
//     {
//         printf("not empty");
//     }
// }
// void peek()
// {
//     if(top<=-1)
//     {
//         printf("empty\n");
//     }
//     else{
//         printf("%d",stack[top]);
//     }
// }
// void full()
// {
//     if(top>ssize-1)
//     {
//         printf("oerflowed");
//     }
//     else if(top==ssize-1)
//     {
//         printf("full");
//     }
//     else{
//         printf("notfull");
//     }
// }
// int main()
// {
// top=-1;
// push (10);
// push (20);
// push (30);
// pop();
// for(int i=0;i<=top;i++)
// {
//     printf("%d\n",stack[i]);
// }
// isempty();
// peek();
// full();
// // }

// #include<stdio.h>
// #include<string.h>
// int top,stack[100];
// void push(int n)
// {
//     if(top>19)
//     {
//         printf("overflowed");
//     }
//     else if (top==19)
//     {
//         printf("full");
//     }
//     else
//     {
//         top++;
//         stack[top]=n;
//     }
// }
// void pop()
// {
//     top--;
//      printf("%d",stack[top]);
// }
// int main()
// {
//     top=-1;
//     char str[20];
//     fgets(str,20,stdin);
//     int n=strlen(str);
//     for(int i=0;i<n;i++)
//     push(str[i]);
    
//     for(int i=0;i<n;i++)  
//       pop(str[i]);  
    
    
//     }

#include<stdio.h>
#include<string.h>
int top;int stack[100];
void push(int n){
 if (top>100-1)
    {
        printf("overflowed");
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
        printf("%d\n",stack[top]);
    }
int main()
{
top=-1;
push(10);
push(23);
push(34);
push(45);
pop();
for(int i=0;i<=top;i++)
{
    printf("%d\n",stack[i]);
}
}