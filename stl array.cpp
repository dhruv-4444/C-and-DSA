#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5> arr={3,2,5,6,7};
    // at = Returns a reference to the element at position n in the array.

    cout<<arr.at(2);
    // begin = retiurn iterator to begining
    cout<<*(arr.begin());
    // back = access last element
    cout<<arr.back()<<endl;    
    // data 
    cout<<*(arr.data());
    // empty
    if(arr.empty())
    {
        cout<<"empty";

    }
    else{
        cout<<"not empty";
    }
    // end element after last element of array
    // fill = fill all the element of array
    arr.fill(5);
    for(auto it:arr)
    {
        cout<<arr[it];
    }
    cout<<endl;
    // front = access the first element of array
    arr.front()=10;
    cout<<arr.front();
    // max_size or size returns the maximum element array can hold
    cout<<arr.max_size();

    cout<<endl<<endl;
    

    array<int,5> arrtr={1,2,3,4,5};
    array<int,5> err={10,20,30,40,50};
    swap(arrtr,err);
    for(auto it:arrtr){
        cout<<arrtr[it];
    }
    cout<<endl;
    for(auto it:err){
        cout<<err[it];
    }
    
}