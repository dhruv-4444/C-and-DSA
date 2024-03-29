#include<iostream>
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
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}