#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> first1;
    // assign 
    first1.assign(5,100); //it will assign firt 5 element a value 100
    vector<int> second;
    vector<int> today;
    today.push_back(10);
    today.push_back(20);
    today.push_back(30);
    today.push_back(40);
    today.push_back(50);
    second.assign(today.begin()+1,today.end()-2); //20,30
    for(int i=0;i<second.size();i++)
    {
        cout<<second[i]<<" ";
    }
    cout<<endl;
    // at
    first1.at(2)=4; //100,100,4,100,100
    first1.at(3)=56; //100,100,4,56,100
    cout<<first1.at(3)<<endl;
    // back = access last element
    cout<<second.back()<<endl;
    second.push_back(second.back()-1); // 20,30,29
    cout<<second.back()<<endl; // 29
    // begin gives the address of first element of vector
    cout<<*(today.begin())<<endl;
    // clear = remove all elements from vector
    first1.clear();
    cout<<first1.size()<<endl;
    // data pointer to first element of vector
    cout<<*(today.data())<<endl;
    // emplace
    
    //emplace_back
    first1.emplace_back(23);
    cout<<first1[0];
    // empty
    (first1.empty()==1)? cout<<"empty":cout<<"notempty";
    // erase single element or range of element ising [first,last)
    today.erase(today.begin()+2);
    today.erase(today.begin(),today.begin()+3);
    for(auto i=today.begin();i!=today.end();i++)
    {
        cout<<*i<<endl;
    }
    // front gives the first element of vector
    cout<<first1.front()<<endl;
    
}