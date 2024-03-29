 #include<iostream>
 using namespace std;
 class hero{
    
   //PROPERTIES
   public:
    char name[100];
    int health;
    char level;

 };

 int main()
 {
    hero ramesh;
      
    ramesh.health=25;
    ramesh.level='a';

    
    cout<<"health "<<ramesh.health<<endl;
    cout<<"level "<<ramesh.level<<endl;
 }