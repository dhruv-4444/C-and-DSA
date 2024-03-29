#include<iostream>
#include<algorithm>
using namespace std;
void first(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int a=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            a=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<a;
}

void last(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int k=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            k=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<"first occurence "<<k;
}
int main()
{
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[size];
    cout<<"enter element of arr";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+size);
    int key;
    cin>>key;
    first(arr,size,key);
    last(arr,size,key);
}