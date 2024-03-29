#include<iostream>
using namespace std;
int main()
{
    int key;
    cout<<"enter key";
    cin>>key;
    int s=0;int e=key-1;int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if((mid*mid)>key)
        {
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
    
}