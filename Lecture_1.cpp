// // #include<iostream>           // preprocessor directive to include the standard input-output stream library
// // using namespace std;

// // int main()
// // {
// //     // Output the string "Noor afshan!" followed by a newline
 
// //     cout << "Noor afshan!" << endl;  


// //     // Variables and primitive data types

// //     int age = 25;
// //     float marks = 23.5;
// //     bool truth_value = false;
// //     char div = 'a';
// //     double sum = 23.25;


// //     // to know the size of each variable

// //     cout << "Int Age: " << sizeof(age) << endl;
// //     cout << "Float Marks: " <<  sizeof(marks) << endl;
// //     cout << "Bool Truth: " <<  sizeof(truth_value) << endl;
// //     cout << "Char div: " <<  sizeof(div) << endl;
// //     cout << "Double sum: " <<  sizeof(sum) << endl;
    

// //     // Implicit conversion ( type conversion ) - done by compiler

// //     char sub = 'A';

// //     int new_sub = sub;

// //     cout << sub << endl;
// //     cout << new_sub << endl;


// //     // Type casting ( explicit conversion ) - done by user with external force

// //     double price = 200.99;

// //     int new_price = (int)price;
// //     cout << new_price << endl;

// //     // Input the data

// //     int account_no;
// //     cout <<"Hello user please enter your Account Number: ";
// //     cin >> account_no;

// //     cout << "You Account Number is: " << account_no << endl;


// //     // Operators in C++
// //     // Arithmetic Operators

// //     int a = 20, b = 10;
// //     cout << "Arithmetic Operators: " << endl;
// //     cout << "Addition: " << a + b << endl;
// //     cout << "Subtraction: " << a - b << endl;
// //     cout << "Multiplication: " << a * b << endl;
// //     cout << "Division: " << a / b << endl;
// //     cout << "Modulus: " << a % b << endl;     // gives the remainder of the division

// //     // Relational Operators
// //     cout << "Relational Operators: " << endl;
// //     cout << "Equal to: " << (a == b) << endl;
// //     cout << "Not Equal to: " << (a != b) << endl;       
// //     cout << "Greater than: " << (a > b) << endl;
// //     cout << "Less than: " << (a < b) << endl;
// //     cout << "Greater than or equal to: " << (a >= b) << endl;
// //     cout << "Less than or equal to: " << (a <= b) << endl;

// //     // Logical Operators we ca use it through the boolean values or through the relational operators
// //     cout << "Logical Operators: " << endl;
// //     cout << "Logical AND: " << (a > 10 && b < 20) << endl;
// //     cout << "Logical OR: " << (a > 10 || b < 20) << endl;
// //     cout << "Logical NOT: " << !(a > 10) << endl;



// //     cout << (5.0/2) << endl;  // gives the quotient of the division
// //     return 0;
// // }

// // /*
// // Boilerplate code for a simple C++ program that prints a message to the console.
// // The program includes the necessary header file for input-output 
// // operations and uses the standard namespace to avoid prefixing standard library names with 'std::'. 
// // The main function serves as the entry point of the program, where it outputs a 
// // greeting message and returns 0 to indicate successful execution.
// // */

// // // I have to study again this type casting & type conversion

// // Problem 1: Sum of two numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cout << "Enter the first value: ";
//     cin >> a;

//     int b;
//     cout << "Enter the second value: ";
//     cin >> b;

//     int c = a + b;
//     cout << "The sum of the two values is: " << c << endl;

//     return 0;
// }


// Unary operator
#include<iostream>
using namespace std;

int main(){ 
    int a = 10;

    // increment
    int b = a++;
    cout << b << endl;    // will print 10 and than internally it become 11

    int c = ++a;
    cout << c << endl;    // will turn 12 and than internally wait for the work

    // Decrement
    int d = a--;
    cout << d << endl;    // will print 12 and than internally it decrease to 11
    
    int e = --a;
    cout << e << endl;    // will print 10 and than internally wait for the work
    return 0;
}