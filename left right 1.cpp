#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int key;
    cout<<"key\n";
    cin>>key;
    int ans=-1;
    for(;s<e;)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<endl<<ans;
     s=0;
     e=size-1;
    int k=-1;
    for(;s<=e;)
    {
        if(arr[mid]==key)
        {
            k=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<endl<<k;
}