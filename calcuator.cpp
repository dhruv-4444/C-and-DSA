#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"enter two numbers"<< endl;
    cin>>a>>b;
    char c;
    cin>>c;
    switch(c)
    {
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*':cout<<(a*b)<<endl;
        break;
        default:cout<<"enter valid operation";
    }

}