#include<iostream>
using namespace std;
void print1(int i,int n)
{
    if(i>n)
    {
        return;
    }
    else{
        cout<<i<<" ";
    }
    print1(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    print1(1,n);
}