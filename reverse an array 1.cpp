#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n;
cout<<"enter size of array\n";
cin>>n;
int arr[1000];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int s=0;
int e=n-1;
while(s<=e)
{
    swap(arr[s],arr[e]);
    s++;
    e--;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}