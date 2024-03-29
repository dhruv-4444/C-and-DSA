#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    int len = n.length();
    int count = 0;
    string s;
    int prevcount = 0;
    if (int i = 0 ; i < len; i++)
    {
        if (n[i] != ' ')
        {
            count++;
        }
        else if (prevcount > count)

        {

            prevcount = prevcount;
        }

        else
        {
            prevcount = count;
        }

        count = 0;
    }
}
}