// Bitwise Operators &, | , ^ , << , >>
// scope - global and local
// Operator Precedence

#include<iostream>
using namespace std;
int x = 20;                // Global Variable

int num(){
    int y = 23;            // Local Variable
    return y;
}

int main(){
    int a = 6, b = 10;
    int c = 10, d = 2, e = 1;

    {
        int z = 20;              // Local Variable
    }
    
    // Bitwise Operator
    int band  = a & b;
    int bor   = a | b;
    int bxor  = a ^ b;
    int left  = c << d;
    int right = c >> e;

    // Operator Precedence
    int ope   = 4 * 5 % 2; // Left to right more detail is in notes 
    int ope2 = 2 + 3 * 4  % 6 - 3;

    cout << band << endl;
    cout << bor << endl;
    cout << bxor << endl;
    cout << left << endl;
    cout << right << endl;
    cout << ope << endl;
    cout << ope2 << endl;
    // cout << z << endl;       // here z gives error cause z is local variable cannot be accessed out of block
    cout << x << endl;       // here x is global variable thats why u can access it any where in the code


    // Data Type Modifier Size
    cout << "Int: " << (sizeof(int)) << endl;
    cout << "Long Int: " << (sizeof(long int)) << endl;
    cout << "Short Int: " << (sizeof(short int)) << endl;
    cout << "Long Long Int: " << (sizeof(long long int)) << endl;
    cout << "Unsigned int: " << (sizeof(unsigned int)) << endl;
    cout << "Signed Int: " << (sizeof(signed int)) << endl;


    // Find a number is a power of 2 or not  using loops

    int n = 32;

    while(n % 2 == 0){
        n = n / 2;
    }

    // Find a number is a power of 2 or not  using bitwise shift operator
    while( n > 1){
        if(n % 2 != 0){
            break;
        }
        n = n >> 1;
    }


    if(n == 1){
        cout << "Power of 2";
    }
    else{
        cout << "Not a power of 2";
    }

    


    return 0;
}



// /*
// In data modifiers
// 5 main types - long, short, long log, unsigned and signed
// the capacity they hold can be different among different machines
// you can check how much data it gives according to your system

// By default, the int data type is (signed), which means it 
// can store both (positive and negative integers).
// When we use unsigned int, it can store only non-negative integers (0 and positive numbers).
// Because unsigned int does not need to store negative numbers, 
// it can use the available bits to store a larger range of positive values 
// than a signed int.
// */



#include<iostream>
using namespace std;
int main(){

}


// g++ code.cpp -o code && code.exe