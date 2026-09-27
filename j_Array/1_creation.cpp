#include<iostream>
using namespace std;

// multiple ways to create an array

int main(){
    // declaring an array with size NO INITIAILIZATION
    int marks[5];

    // to access these 5 element we generally use elements - why? cause bro its easy
    for(int i = 0; i < 5; i++){
        cout << "Enter the ELement " << i+1 << ": ";
        cin >> marks[i];
    }
    // to show al 5 elements:
    for(int i = 0; i < 5; i++){
        cout << "Element " << i+1 << ": " << marks[i] << endl;
    }

    // declaring an array with SIZE and INITIAILIZATION
    int age[5] = {1, 2, 3, 4, 5};

    int price[5] = {1, 2, 3};     // rest 2 elements will be initialize with 0

    int idk[5] = {};              // all elements = 0


    // declaring an array without SIZE but with INITIAILIZATION

    int idkkk[] = {1,2,3,4,5};   // here size = number of elements in an array
    // changing any particular value ( or all ) is possible in the main array
    
    idkkk[2] = 99;
    cout << idkkk[0] << endl;
    cout << idkkk[1] << endl;
    cout << idkkk[2] << endl;
    cout << idkkk[3] << endl;
    cout << idkkk[4] << endl;

    cout << idkkk << endl;                 
    //This will not print the elements. It will print an address-like value
    // it is the address of the first element


    // To get how many element inside the array
    // we will first know size of the array
    // than we will  devide it by the size of the data type

    cout << sizeof(idkkk) / sizeof(int);             // Output 5

    return 0;
}

// g++ code.cpp -o code && code.exe
// generally index of array = 0 to size - 1