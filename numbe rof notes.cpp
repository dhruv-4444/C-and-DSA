#include<iostream>
using namespace std;
void notes(int a)
{
    cout<<"number of 100 rs notes " <<(a/100)<<endl;
    cout<<"number of 50 rs notes " <<((a%100)/50)<<endl;
     cout<<"number of 50 rs notes " <<(((a%100)%50)/20)<<endl;
     cout<<"number of 50 rs notes " <<(((a%100)%50)%20)<<endl;
}
int main()
{
    int n;
    cin>> n;
    notes(n);

}