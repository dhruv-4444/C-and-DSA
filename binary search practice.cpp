#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cout<<"enter length of array";
    cin>>t;
    int arr[t];
    for (int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+t);
    for(int i=0;i<t;i++)
    {
        cout<<arr[i];
    }
    int key;
    cin>>key;
    int s=0;
    int e=t-1;
    int mid=s+(e-s)/2;
    for(;s<=e;)
    {
        if(arr[mid]==key)
        {
            cout<<key<<"is at index"<<mid;
        }
         if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
       
        mid=(s+e)/2;
        
    }
    cout<<-1;
}