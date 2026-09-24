// function 

#include<iostream>
#include<string.h>
using namespace std;

// function for the sum of two numbers 

int sum(int a, int b){                            // Function definition
    return a + b;
}

string maxofTwo(int a, int b){                    // maximum of two number
    if (a == b){
        string equality = "Equal";
        return equality;
    }
    else if(a > b){
        string equality = "A is Greater";
        return equality;
    }
    else{
        string equality = "B is Greater";
        return equality;
    }
}

int sumN(int a){                                  // sum till N number
    int sumN = 0;
    for(int i = 1; i <= a; i++){
        sumN = sumN + i;
    }
    return sumN;
}

int factN(int a){                                 // Factorial till N Number
    int fact = 1;

    for(int i = 1; i <= a; i++){
        fact = fact * i;
    }
    return fact;
}

int digitcalc(int a){                             // sum of a digit of a number
    int digitsum = 0;

    while( a > 0){
        int lastdigit = a % 10;        // give us digit 
        a = a / 10;                    // this give us value after removing last numbe
        
        digitsum += lastdigit;
    }
    return digitsum;
}

int binomial(int a, int b){                       // Calculate binomial cofficient nCr we need n and r
    int fact_n = factN(a);
    int fact_r = factN(b);
    int fact_nmr = factN(a-b);

    int nmr = fact_n/(fact_r * fact_nmr);

    return nmr;
}

int main(){                          // Main Function
    int a, b;
    cout << "Enter Value of 1st Number: ";
    cin >> a;
    cout << "Enter Value of 2nd Number: ";
    cin >> b;

    // cout << endl;
    // int calc = sum(a, b);              // Function Call and here a and b is aruments 
    // cout << "Sum of " << a << " and " << b << " is: " << calc;

    // cout << endl; 
    // string equality = maxofTwo(a, b);
    // cout << equality;

    // cout << endl; 
    // int sumtillN = sumN(a);
    // cout << "The sum from 0 to " << a << " is: " << sumtillN;

    // cout << endl;
    // int facttillN = factN(a);
    // cout << "The factorial of " << a << " is: " << facttillN;

    // cout << endl;
    // int digit = digitcalc(a);
    // cout << "The sum of the digits of the " << a << " is: " << digit;

    cout << endl;
    int binomialcoefficiant = binomial(a, b);
    cout << "Binomial Coefficient: " << binomialcoefficiant << endl;

    return 0;
}















// generally in our program arguments are literals, litrals are those values
// in a program whose value remain same for the entire program
// eg 1 = 1 always