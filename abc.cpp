#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"enter size of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements of araray";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sorting the array
    std::sort(arr,arr+n);
    cout<<"sorted array is \n";
    // printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
cout<<endl;
    int s=0,e=n-1;
    int mid=s+(s-e)/2;
    cout<<"enter element whose occourence you want to find";
    int key;
    cin>>key;\
    int ans;
     while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=arr[mid];
        }
    }        
        for(int i=1;i<mid;i++)
        {
            if(arr[mid-i]==key)
            {
            continue;
            }
            else{
                break;
                ans=mid-i+1;
            }
        }
        cout<<ans;
    }

    //     if(key>arr[mid]){
    //     s=mid+1;
    //     }
    //     else
    //     {
    //         e=mid-1;
    //     }
    //     mid=(s+e)/2;
    //     }
    //     cout<<ans;
    // //  cout<<-1;
