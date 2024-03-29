#include<iostream>
using namespace std;
int find(int arr[],int size,int element)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==element)
    {
        return true;
    }
    else{
        bool remain=find(arr+1,size-1,element);
        return remain;
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    int element;
    cout<<"enter element to find";
    cin>>element;
    bool ans=find(arr,n,element);
    if(ans)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
}