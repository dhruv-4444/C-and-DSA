#include<iostream>
using namespace std;
int main()
{
    int arr[5]={7,9,1,2,3};
    int s=0;int e=4;int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]>=arr[s])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
     cout<<s<<"  "<<arr[s];
}