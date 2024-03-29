#include<bits/stdc++.h>
using namespace std;
int length(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]!='\0')
        {
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

void reverse(char arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<arr;
}
int main()
{
    char arr[20];
    cin>>arr;

    reverse(arr,length(arr));
    
}