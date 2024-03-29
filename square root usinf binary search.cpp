#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the no. ";
    cin>>number;
    int s=0;
    int e=number;
    int mid=s+(e-s)/2;
    int ans=-1;
    for(;s<e;)
    {
        if((mid*mid)>number)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
 cout<<ans;  
}