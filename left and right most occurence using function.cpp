#include<iostream>
#include<algorithm>
using namespace std;
int firstoccur(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
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
    return ans;
}
int lastoccur(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
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
    return k;
}
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
    
    int key;
    cout<<"key\n";
    cin>>key;
    cout<<"first occurenece"<<firstoccur(arr,size,key)<<endl;
    cout<<"last occurenece"<<lastoccur(arr,size,key)<<endl;
}