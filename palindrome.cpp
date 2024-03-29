#include<iostream>
using namespace std;
bool recursion (string arr,int i,int s)
{


    if(i>s)
    {
        return false;
    }
    if(arr[i]==arr[s])
    {
        return true;
    }
    else{
        return false;
    }
     recursion(arr,i++,s--);
}
int main()
{
   
    string arr;
    getline(cin,arr);
    int i=0;
int s=arr.length()-1;
    bool q=recursion(arr,i,s);
if(q==true)
{
    cout<<"true";

}
else{
    cout<<"false";
}
}