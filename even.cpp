#include<iostream>
using namespace std;
void even(int n)
{
    if(n%2==0)
    {
        cout<<n<<" is even"<<endl;
    }
    else{
        cout<<n<<" is odd"<<endl;
    }
}
int main()
{
    int a;
    cin>>a;
    even(a);
}