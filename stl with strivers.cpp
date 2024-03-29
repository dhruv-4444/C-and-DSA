#include <bits/stdc++.h>
using namespace std; // package of all the function and scopes

// struct is a user define data type
struct node
{
    string str;
    int num;
    double doub;
    char x;

    // constructor
    node(string str_, int num_, double doub_, char x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};
// namespace is used for a particular scope

int main()
{
    double val = 10.1;
    cout << val << endl; // printd 10.1
    // this will work but it is wrong way of defining it
    // node dhruv;
    // node.str = "hello";
    // node.num = 79;
    // node.doub = 91.2;

    // good practice
    node *dhruv=new node("dhruv", 79, 97, 'c');

    // arrays
    array<int, 3> arr = {1, 2, 3};
    //-> {?,?,?} if we declare it in local then it will have garbage value but if we declare it in globaly it will get all 0;

    //    for (int i=0;i<5;i++)
    //    {
    //     cout<<arr.at(i)<<" ";
    //    }

    for (auto it = arr.begin(); it != arr.end(); it++)
    // here it will get address of index;
    {
        cout << *it << " ";
    }

    for(auto it= arr.rbegin();it!=arr.rend();it++)
    {
        cout<<*it<<" ";
    }

    for(auto it= arr.rend()-1;it!=arr.rbegin();it++)
    {
        cout<<*it<<" ";
    }
}
