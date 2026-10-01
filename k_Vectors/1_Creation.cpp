#include<iostream>
#include<vector>
using namespace std;

int main(){
    // multiple ways to create vector 
    // but general syntax is : vector <data_type> vector_name;
    vector <int> vec;
    cout << "VEC" << endl;
    cout << "Size of Vec is: " << sizeof(vec) << endl;
    cout << "Elements inside vec is: " << vec.size() << endl;
    cout << "Capacity of vec is: " << vec.capacity() << endl;

    cout << endl;
    
    vector <int> nums = {1,2,3,4};
    cout << "Nums" << endl;
    cout << "Size of Nums is: " << sizeof(nums) << endl;
    cout << "Elements inside Nums is: " << nums.size() << endl;
    cout << "Capacity of Nums is: " << nums.capacity() << endl;

    cout << endl;

    vector <int> marks(3, 0);
    cout << "Marks" << endl;
    cout << "Size of Marks is: " << sizeof(marks) << endl;
    cout << "Elements inside Marks is: " << marks.size() << endl;
    cout << "Capacity of Marks is: " << marks.capacity() << endl;
}




/*
Imagine a school bag 🎒.

sizeof(vec) asks:
"How much space does the BAG structure itself take?"

vec.size() asks:
"How many BOOKS are currently inside the bag?"
*/