#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<s;
}