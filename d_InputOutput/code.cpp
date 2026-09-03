// #include<iostream>
// using namespace std;
// int main(){

//     int age;  // if u print age now it will print garbage value

//     cout << "Enter your Age user: ";
//     cin >> age;

//     cout << "Your age is : " << age << endl;
//     return 0;
// }



//------------------------------------------------------------------------------------
// Problem : Ask user age and Name and than print it

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int age;
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age ";
    cin >> age;

    cout << "Hello " << name << " Your age is " << age << endl;

    return 0;
}