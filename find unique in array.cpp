#include<iostream>
using namespace std;

void unique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
   cout<<"unique element  "<<ans<<endl;
}





int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    unique(arr,size);


}
