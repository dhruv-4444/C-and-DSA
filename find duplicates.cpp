#include<iostream>
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
    int ans=0;
     // xor all array element
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    // xor[1 to n-1]
    for(int i=0;i<size;i++)
    {
        ans=ans^i;
    }
    cout<<"dupliacte elemnt"<<ans;
}