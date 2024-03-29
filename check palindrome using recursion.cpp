#include<iostream>
using namespace std;

bool palindrome(string & name,int i,int j)

{
    if(i>j)
    {
        return true;
    }
   if(name[i]!=name[j])
   {
    return false;
   }
   else{
    i++;
    j--;
    return palindrome(name,i,j);
   }

}




int main()
{
    string name="aba";
    bool ans=palindrome(name,0,name.length()-1 );
    if(ans)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}