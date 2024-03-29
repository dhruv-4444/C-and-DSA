#include <bits/stdc++.h> 
using namespace std;
bool checkPalindrome(string s)
{
    int i=0;
    int e=s.size()-1;
    while(i<=e)
    {
        if(s[i]!=s[e])
        {
            return 0;
        }
        else{
            i++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char a[100];
    cin>>a;
    cout<<checkPalindrome(a);
}
