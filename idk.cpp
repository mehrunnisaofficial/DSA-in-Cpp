// #include<iostream>
// #include<cmath>
// using namespace std;

// int dtb(int n){
//     int digits = 0;
//     int base = 10;
//     int exponent = 0;

//     while(n > 0){
//         int remainder = n % 2;
//         n = n / 2;

//         int p = pow(base, exponent);
//         int add = remainder * p;

//         cout << "BEFORE = " << digits << endl;
//         cout << "remainder = " << remainder << endl;
//         cout << "p = " << p << endl;
//         cout << "add = " << add << endl;

//         digits = digits + add;

//         cout << "AFTER = " << digits << endl;
//         cout << "----------------" << endl;
        
//         exponent++;
//     }
//     return digits;
// }

// int main(){                          // Main Function
//     int a, b;
//     cout << "Enter Value of 1st Number: ";
//     cin >> a;
//     cout << endl;
//     cout << "Conversion From Decimal to Binary:\n" << a << " to " << dtb(a) << endl;

//     return 0;
// }



#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int base = 10;
    int exponent = 2;

    cout << "pow = " << pow(base, exponent) << endl;

    double x = pow(base, exponent);
    cout << "double x = " << x << endl;

    int y = pow(base, exponent);
    cout << "int y = " << y << endl;

    return 0;
}