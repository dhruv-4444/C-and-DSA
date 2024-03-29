// find a pair of element frim the array whose sum is 12
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
    int element=arr[i];
    for(int j=1;j<size;j++)
    {
        if(element+arr[j]=12)
        {
            cout<<element<<arr[j];
        }
    }
    }
}