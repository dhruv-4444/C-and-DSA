#include<iostream>
using namespace std;
class comp{
    public:
    int roll;
    string name;
    int marks;
};
int main()
{
    comp g18[2];
    for(int i=1;i<=2;i++)
    {
        cin>>g18[i].roll;
       cin>>g18[i].name;
        cin>>g18[i].marks;
    }
     for(int i=1;i<=2;i++)
    {
        cout<<g18[i].roll;
        cout<<g18[i].name;
        cout<<g18[i].marks;
    }
}
    
// }
// #include <iostream>
// using namespace std;

// class comp {
// public:
//     int roll;
//     string name;
//     int marks;
// };

// int main() {
//     comp g18[2]; // Array of objects

//     for (int i = 0; i < 2; i++) {
//         cout << "Enter student " << i + 1 << " details:" << endl;
//         cin >> g18[i].roll;
//         cin >> g18[i].name;
//         cin >> g18[i].marks;
//     }

//     cout << "Student details:" << endl;
//     for (int i = 0; i < 2; i++) {
//         cout << "Roll: " << g18[i].roll << endl;
//         cout << "Name: " << g18[i].name << endl;
//         cout << "Marks: " << g18[i].marks << endl;
//     }

//     return 0;
// }
