#include<iostream>
using namespace std;  
int main(){ 
    int age = 23;
    int x = -234;
    char letter = 'A';
    bool truth = true;                 // true means = 1, false means 0
    float marks = 23.45;
    double Price = 99.9999;
    // void name = 23;              // return error
    
    
    cout << "Age = " << age << endl;
    cout << "Size of Age = " << sizeof(age) << endl;
    cout << endl;           // for extra space

    cout << "X = " << x << endl;
    cout << "Size of X = " << sizeof(x) << endl;
    cout << endl;

    cout << "Letter = " << letter << endl;
    cout << "Size of Letter = " << sizeof(letter) << endl;
    cout << endl;  

    cout << "Truth = " << truth << endl;
    cout << "Size of Truth = " << sizeof(truth) << endl;
    cout << endl;  

    cout << "Marks = " << marks << endl;
    cout << "Size of Marks = " << sizeof(marks) << endl;
    cout << endl;  

    cout << "Price = " << Price << endl;
    cout << "Size of Price = " << sizeof(Price) << endl;


    return 0;
}






// NOTES

// STATEMENT TERMINATOR :
// ; means statement terminator exactly like fullstop in english
// It tells the compiler that a specific instruction or logical entity has ended.

// NAMESPACE :
// A container or logical grouping that holds related programming elements.

// cout << "Age" << endl;
// if you write anything inside double quote than it will print as it is
// like see