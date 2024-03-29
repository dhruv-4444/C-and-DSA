#include<iostream>
using namespace std;
int main()
{   
    // taking size of arrays
    int size1,size2;
    cout<<"enter size of array1";
    cin>>size1;
    cout<<"enter size of array2";
    cin>>size2;
    int arr1[size1],arr2[size2];
    // takin elements of arrays
    cout<<"enter elements of arr1";
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter elements of arr2";
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"intersected element  ";
//  checking for intersection in both the arrays by applying multiple loops 
    for(int i=0;i<size1;i++)
    {
        int element=arr1[i];
        for(int j=0;j<size2;j++)
        {
            if(element==arr2[j])
            {
                cout<<element;
                arr2[j]=-123;
                break;
            }
        }

    }
}