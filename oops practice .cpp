#include<iostream>
using namespace std;
class hero{
    private:
    
    int health;
     public:
     char name;
     int level;

     int gethello()
     {
        return health;
     }
     void sethell(int h)
     {
        health=h;
     }
};
int main()
{
    hero ramesh;
    int i=5;
    ramesh.sethell(i);
    int j=ramesh.gethello();
    cout<<j<<endl;
    ramesh.level=4;
    ramesh.name='f';
    cout<<ramesh.level<<endl;
    cout<<ramesh.name<<endl;
}