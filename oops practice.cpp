// #include<iostream>
// #include<algorithm>
// using namespace std;

// class secretbase{
//     public:
//     string baselocation;
//     int security;


//     secretbase(string baselocation = "",int security=0)
//     {
        
//     this->baselocation = baselocation;
//     this->security = security;

//     }
  

//     ~secretbase()
//     {
//         cout<<"base is destroyed";
//     }
// }; 



// int main()
// {
//     secretbase a;
//     a.baselocation="mounteverest";
//     a.security=5;
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
//  class tm{
//     public:
//     int x;
//     int y;
//     tm(int a1=0,int a2=0)
//     {
//         this->x=a1;
//         this->y=a2;
//     }
//     tm operator-(tm b)
//     {
//         tm temp;
//         temp.x=x+b.x;
//         temp.y=y+b.y;
//         return temp;

//     }
    
//  };

//  int main()
//  {
//     tm a,b;
//     cout<<"enter a.x a.y"<<endl;
//     cin>>a.x>>a.y;
//     cout<<"enter b.x b.y"<<endl;
//     cin>>b.x>>b.y;
//     tm c=a-b;
//     cout<<c.x<<" "<<c.y;
//     tm d;


//  }




#include<iostream>
using namespace std;

class animal{
    public:
    string name;
    int age;
};

class lion:public animal{
    public:
    void display()
    {
        cout<<"lion named "<<name<<"having age"<<age;
    }

};

class monkey:public animal{
    public:
    void display()
    {
        cout<<"monkey named "<<name<<"having age"<<age;
    }
};

class elephant:public animal{
    public:
    void display()
    {
        cout<<"elephant named "<<name<<"having age"<<age;
    }

};


int main()
{
    elephant m;

    m.age=85;
    m.name="hello";
    m.display();
}
