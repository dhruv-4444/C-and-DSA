#include<iostream>
using namespace std;

int sorted(int *arr,int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
   if(arr[0]>arr[1])
   {
    return false;
   }
   else
   {
   bool remain=sorted(arr+1,n-1);
   return remain;
   }
}
int main()
{
    int arr[5]={1,2,5,4,5};
    int size=5;
    bool ans=sorted(arr,size);
    if(ans==1)
    {
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }

}
