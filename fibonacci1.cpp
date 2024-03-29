#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c;
    if(n==0)
    {
        cout<<a<<endl;

    }
    else if (n==1)
    {
        cout<<b<<endl;
    }
    else
    {
        // cout<<a<<" "<<b<<" ";
        for(int i=2;i<n;i++)
        {
    
    
     c=a+b;
    
    a=b;b=c;
}
cout<<c<<" ";
}
}