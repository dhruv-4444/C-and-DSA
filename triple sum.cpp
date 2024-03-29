#include<iostream>
using namespace std;
int main()
{
    
    int size;
    
    cin>>size;
    int arr[size];
    for(int m=0;m<size;m++)
    {
        cin>>arr[m];
    }
    for(int m=0;m<size;m++)
    {
        cout<<arr[m];
    }
    cout<<endl;
    int a=12;
  
    for(int i=0;i<size;i++)
    {
        
        for(int j=i+1 ;j<size;j++)
        {
            
            for(int k=i+2;k <size;k++)
            {
            
            if((arr[i]+arr[j]+arr[k])==a)
            {
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                
            }
            }
        }
    }

}