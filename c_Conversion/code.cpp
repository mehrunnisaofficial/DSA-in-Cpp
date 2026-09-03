// Two types of conversion
// Implicit - directly done by compiler

# include <iostream>
using namespace std;

int main(){

    // IMPLICIT - TYPE CONVERSION

    int age = 23;
    float new_age = age;      // So internally, new_age is a float containing 23.0
    char grade = 'A';
    int new_grade = grade;

    cout << new_age << endl;   
    cout << new_grade << endl;     
    
    
    // EXPLICIT - TYPE CASTING

    double marks = 238.99;
    int new_marks = (int)marks;
    cout << new_marks << endl;
    
    return 0;
}



