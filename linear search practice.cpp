#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cout<<"enter size of array\n";
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+t);
    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    for(int i=0;i<t;i++)
    {
        if(arr[i]==key)
        {
            cout<<key<<"is at index"<<i;
            break;
        }
        else
        {
            continue;
        }
       
    }
}