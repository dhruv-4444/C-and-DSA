#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int *p=&n;
    int *q=p;
    cout<<*p<<*q<<endl;

    return 0;
    
}