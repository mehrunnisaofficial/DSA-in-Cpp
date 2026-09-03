// Arithemetic Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter the value of of 1st Number: ";
//     cin >> a;

//     cout << "Enter the value of 2nd Number: ";
//     cin >> b;

//     cout << "Addition : " << a + b << endl;
//     cout << "Addition (Float) : " << (float)a + b << endl;
//     cout << "Difference : " << a - b << endl;
//     cout << "Multiplication : " << a * b << endl;
//     cout << "Division : " << a / b << endl;
//     cout << "Remainder : " << a % b << endl;

//     cout << (5 / 2) << endl;             // return 2
//     cout << (5 / (float)2) << endl;      // return 2.5   
//     cout << ((float)5 / 2) << endl;      // return 2.5   
//     return 0;
// }


//------------------------------------------------------------------------------
// RELATIONAL OPERATORS

// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter the value of of 1st Number: ";
//     cin >> a;

//     cout << "Enter the value of 2nd Number: ";
//     cin >> b;

//     // true = 1, false = 0

//     cout << "Greater than : " << (a > b) << endl;
//     cout << "Less than : " << (a < b) << endl;
//     cout << "Greater than equal to : " << (a >= b) << endl;
//     cout << "Less than equal to : " << (a <= b) << endl;
//     cout << "Not equal to : " << (a != b) << endl;

//     return 0;
// }


//--------------------------------------------------------------------------------
// LOGICAL OPERATOR

// #include<iostream>
// using namespace std;

// int main(){
//     int a, b, c, d;
//     cout << "Enter the value of of 1st Number: ";
//     cin >> a;

//     cout << "Enter the value of 2nd Number: ";
//     cin >> b;

//     cout << "Enter the value of of 3rd Number or 4th Number: ";
//     cin >> c >> d;

//     // true = 1, false = 0
//     // AND = both (or all) statements true = 1 otherwise 0
//     // OR = both (or all) statements true = 1
//     // any one statement true = 1, otherwise 0
//     // NOT = if answer is 1 it will give 0, vice verca
    
//     cout << "AND : " << ((a > b) && (c > d)) << endl;
//     cout << "OR : " << ((a > b) || (c > d)) << endl;
//     cout << "NOT : " << (!(a >= b)) << endl;

//     return 0;
// }

//--------------------------------------------------------------------------------
// UNARY OPERATOR
// ++ increment -> ++ means +1
//     pre increment and post increment
// -- decrement -> -- means -1
//     pre decrement and post decrement

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a++;   // print 10 internally become 11
    int c = ++a;   // internally it was 11 not adding +1 means it will print 12

    int d = a--;   // print 12 internally become 11
    int e = --a;   // internally it was 11 not subtracting -1 means it will print 10


    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}