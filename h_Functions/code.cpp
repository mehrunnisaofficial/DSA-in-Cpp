// function 

#include<iostream>
#include<string.h>
#include <cmath>
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

int fobonacchi(int n){
    int a = 0, b = 1;
    for(int i = 0; i < n; i++){
        int next = a + b;
        a = b;
        b = next;
    }
    return a;
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int dtb(int n){
    int digits = 0;
    int power = 1;  // 10^0 -> 10^1 -> 10^2 and so on

    while(n > 0){
        int remainder = n % 2;
        n = n / 2;

        digits = digits + remainder * power;

        power = power * 10;
    }
    return digits;
}
//  another way to do the same code is 

int dtb2(int n){          // But if u have old compiler avoid this method
    int digits = 0;
    int base = 10;
    int exponent = 0;

    while(n > 0){   
        int remainder = n % 2;
        n = n / 2;

        cout << "remainder = " << remainder << endl;
        cout << "exponent = " << exponent << endl;
        cout << "pow = " << pow(base, exponent) << endl;

        digits = digits + (remainder * pow(base, exponent));

        cout << "digits = " << digits << endl;
        cout << "----------------" << endl;

        exponent++;
    }
    return digits;
}

bool check_binary(int n){
    int binary = n;

    while(binary > 0){
        int remainder = binary % 10;
        binary = binary / 10;
        if(remainder != 1 && remainder != 0){
            return false;
        }
    }
    return true;
}

int btd(int n){
    int ans = 0, pow = 1;

    if(!check_binary(n)){
        cout << "Number is not binary we can't convert it in decimal";
        return -1;
    }

    while(n > 0){
        int remainder = n % 10;
        ans += remainder * pow;

        // Updation
        n /= 10;
        pow *= 2;
    }

    return ans;
}

int revnum(int copynum){
    int reverse = 0;

    while(copynum > 0){
        int remainder = copynum % 10;        // getting last digit
        reverse = reverse * 10 + remainder;
        copynum = copynum / 10;              // removing last digit
    }
    return reverse;
}



int main(){                          // Main Function
    int a, b;
    cout << "Enter Value of 1st Number: ";
    cin >> a;
    cout << "Enter Value of 2nd Number: ";
    cin >> b;

    cout << endl;
    int calc = sum(a, b);              // Function Call and here a and b is aruments 
    cout << "Sum of " << a << " and " << b << " is: " << calc;

    cout << endl; 
    string equality = maxofTwo(a, b);
    cout << equality;

    cout << endl; 
    int sumtillN = sumN(a);
    cout << "The sum from 0 to " << a << " is: " << sumtillN;

    cout << endl;
    int facttillN = factN(a);
    cout << "The factorial of " << a << " is: " << facttillN;

    cout << endl;
    int digit = digitcalc(a);
    cout << "The sum of the digits of the " << a << " is: " << digit;

    cout << endl;
    int binomialcoefficiant = binomial(a, b);
    cout << "Binomial Coefficient: " << binomialcoefficiant << endl;

    cout << endl;
    int fibon = fobonacchi(a);
    cout << "The " << a << "th term in the Fibonachi series is: " << fibon;

    cout << endl;
    for(int i = 2; i <= a; i++){
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    cout << "Conversion From Decimal to Binary:\n" << b << " to " << dtb(b) << endl;

    cout << endl;
    int btdd = btd(a);
    if (btdd == -1){
        return 0;
    }
    cout << "Conversion From Binary to decimal:\n" << a << " to " << btd(a) << endl;

    return 0;
}















// generally in our program arguments are literals, litrals are those values
// in a program whose value remain same for the entire program
// eg 1 = 1 always

// g++ code.cpp -o code && code.exe
