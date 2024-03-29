#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    for(;s<e;)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<s<<endl<<arr[s];

}