#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int size;
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
    cout<<"enter key";
    cin>>key;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
   while(start<=end)
    {
        if(key==arr[mid])
        {
            cout<<"index no. of key is  "<<mid;
        }
        if(key>arr[mid]){
        start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
        }
     cout<<-1;
}