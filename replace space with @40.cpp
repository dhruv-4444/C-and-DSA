#include<iostream>
using namespace std;
int main()
{


    string s;
    getline(cin,s);
    string d= "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            d.push_back('@');
            d.push_back('4');
            d.push_back('0');
        }
        else{
            d.push_back(s[i]);
        }
    }
    cout<<d;
}