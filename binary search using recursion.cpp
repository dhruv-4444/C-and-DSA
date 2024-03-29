#include<iostream>
using namespace std;

bool binary(int arr[],int s,int e,int element)
{
    int mid=s+(e-s)/2;
    if(s>e)
    {
        return false;
    }
    if (arr[mid]==element)
    {
        return true;
    }

    if(s<mid)
    {
        return(arr, mid+1, e, element);  
    }
    if(s>mid)
    {
        return(arr, s, mid-1, element);  
    }
}



int main()
{
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    // int arr[5]={1,2,3,4,5};
        int s=0;
    int e=sizeof(arr)-1;
    int element;
    cout<<"element";
    cin>>element;

 bool ans= binary(arr,s,e,element);
 if(ans)
 {
    cout<<"found";
 }
 else
 {
    cout<<"false";
 }
}