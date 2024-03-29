#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> first={1,2,3,4,1,2,3};
// begin work as pointer to first element of array
set<int> s(first.begin(),first.begin()+7);

for(auto it = s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl;
// clear to delete all element in set
// insert to enter elements in set
s.clear();
s.insert(12);
s.insert(45);
for(auto it = s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";
}
// count if it found the element then it will return 1 other wise 0 bcoz it will not able to count as set will contain all inique value
if(s.count(12)!=0)
{
    cout<<"present"<<endl;
}
else
{
cout<<"not present"<<endl;
}
// emplace to add new element if it is unique
// emplace_hint add element with a hint that where to add it
 s.emplace_hint(s.end(),85);
 cout<<*s.rbegin();
//  empty test whether the set is empty or not
if(s.empty()!=0)
{
    cout<<"empty"<<endl;
}
else
{
    cout<<"not empty"<<endl;
}
// equal_range


// erase
// find
s.erase(85);
s.erase(s.find(12));
for(auto it = s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";
}
//  insert to add element to set just like push back
// lower bound Returns an iterator pointing to the first element in the container which is not considered to go before val (i.e., either it is equivalent or goes after).
s.insert(1);

s.insert(3);
s.insert(4);
cout<<*s.lower_bound(2)<<endl;
// size
cout<<s.size()<<endl;
// upper_bound Returns an iterator pointing to the first element in the container which is considered to go after val.
for(auto it = s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";
}
cout<<*s.upper_bound(45)<<endl;
}