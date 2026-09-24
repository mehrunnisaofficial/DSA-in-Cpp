// LOOPS
// // adding all odd number till user want

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Enter till user want to add the number: ";
//     cin >> num;

//     int sum = 0;

//     for(int i = 1; i <= num; i++){
//         if ((i % 2) != 0){
//             sum += i;
//         }
//     }
//     cout << "Sum of number from 1 to " << num << " is " << sum;

//     return 0;
// }

//// -----------------------------------------------------------------------------------
// adding all even number till user want

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Enter till user want to add the number: ";
//     cin >> num;

//     int sum = 0;

//     for(int i = 1; i <= num; i++){
//         if ((i % 2) == 0){
//             sum += i;
//         }
//     }
//     cout << "Sum of number from 1 to " << num << " is " << sum;

//     return 0;
// }

//------------------------------------------------------------------------------------------
// check whether a number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "ENter the number: ";
//     cin >> num;

//     bool isPrime = true; 

//     for(int i = 2; i*i < num; i++){
//         if (num % i == 0){
//             isPrime = false;
//         }
//     }
//     if (isPrime == true){
//         cout << num << " is Prime";
        
//     }
//     else{
//         cout << num << " is COnsonant";
//     }
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "ENter the number: ";
//     cin >> num;

//     bool isPrime = true; 

//     for(int i = 2; i < num; i++){
//         if(num % i == 0){
//             cout << num << " is NOT Prime";
//             break;
//         }

//         if(i == num - 1){
//             cout << num << " is Prime";
//         }
//     }
//     return 0;
    
// }


// -------------------------------------------------------------------------
// // NESTED LOOPS
// // patterns
// /*
// *****
// *****
// *****
// *****
// *****
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout << "*";
            
//         }
//         cout << endl;
//     }
// }


// /*
// *
// **
// ***
// ****
// *****
// */

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 10;
//     char s = '*';
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++){
//             cout << s;
//         }
//         cout << endl;
//     }
// }

// /*
// *****
// ****
// ***
// **
// *
// */

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 1;
//     char s = '*';
//     for (int i = 10; i >= n; i--){
//         for (int j = 1; j <= i; j++){
//             cout << s;
//         }
//         cout << endl;
//     }
// }


// //---------------------------------------------------------------------------------------------
// // SQUARE PATTERN
// /*
// 1234
// 1234
// 1234
// 1234
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line = 6;
//     for(int i = 1; i <= line; i++){
//         for(int j = 1; j <= line; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------
// // OPPOSITE TRAINGLE PATTERN
// /*
// 54321
// 4321
// 321
// 21
// 1
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter the total line u wanna print: ";
//     cin >> line;

//     // suppose line = 5
//     for(int i = line; i >= 1; i--){    // here i = 5; i >=1 ; i--
//         for(int j = i; j >= 1; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //-----------------------------------------------------------------------------------------------------
// // OPPOSITE TRAINGLE PATTERN
// /*
// 54321
// 5432
// 543
// 54
// 5
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter the total line u wanna print: ";
//     cin >> line;

//     // suppose line = 5
//     for(int i = line; i >= 1; i--){                     // it is for line how many lines u wanna print
//         for(int j = line; j >= line - i + 1; j--){      // it is for what elements u wanna print in each loop
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


//-----------------------------------------------------------------------------------------------------
// Square PATTERN
/*
A B C D E
A B D D E
A B C D E
A B C D E
A B C D E
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter the total line u wanna print: ";
//     cin >> line;

//     // suppose line = 5
//     for(int i = 0; i < line; i++){                     // it is for line how many lines u wanna print
//         char ch = 'A';
//         for(int j = 0; j < line; j++){                       // it is for what elements u wanna print in each loop
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter the total line u wanna print: ";
//     cin >> line;

//     // suppose line = 5
//     for(int i = 0; i < line; i++){                     // it is for line how many lines u wanna print
//         for(char ch = 'A'; ch <= 'E'; ch++){                       // it is for what elements u wanna print in each loop
//             cout << ch;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // Another Way
// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter the total line u wanna print: ";
//     cin >> line;

//     // suppose line = 5
//     for(int i = 0; i < line; i++){                     // it is for line how many lines u wanna print
//         for(char ch = 'A'; ch < 'A'+line; ch++){                       // it is for what elements u wanna print in each loop
//             cout << ch;
//         }
//         cout << endl;
//     }
//     return 0;
// }


//-----------------------------------------------------------------------------------------------------
// Square PATTERN
/*
123
456
789
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you wanna print: ";
//     cin >> line;
//     int element = 1;
//     for(int i = 0; i < line; i++){
//         for(int j = 0; j < line; j++){
//             cout << element;
//             element++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------
// Triangle PATTERN
/*
1
22
333
4444 and so on
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you wanna print: ";
//     cin >> line;

//     for(int i = 1; i <= line; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you wanna print: ";
//     cin >> line;

//     for(int i = 0; i < line; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //-----------------------------------------------------------------------------------------------------
// // Reverse Triangle PATTERN
// /*
// 1
// 21
// 321
// 4321 and so on
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;

//     for(int i = 0; i < line; i++){
//         for(int j = i+1; j > 0; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //-----------------------------------------------------------------------------------------------------
// // Flyod's Triangle PATTERN
// /*
// 1
// 23
// 4567
// 891011 and so on
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;

//     int element = 1;

//     for(int i = 0; i < line; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << element;
//             element++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //-----------------------------------------------------------------------------------------------------
// // Reverse Triangle PATTERN
// /*
// A
// B A
// C B A
// D C B A
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;

//     for(int i = 0; i < line; i++){
//         for(char ch = 'A'+ i; ch >= 'A'; ch--){
//             cout << ch;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// //-----------------------------------------------------------------------------------------------------
// // Reverse Triangle PATTERN
// /*
// A
// B C
// D E F
// G H I J
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;

//     char element = 'A';

//     for(int i = 0; i < line; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << element;
//             element++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------
// INVERTED Triangle PATTERN
/*
1 1 1 1
  2 2 2
    3 3
      4
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;
//     int elements = line;


//     for(int i = 0; i < line; i++){                   // for lines
//         for(int k = 0; k < i; k++){
//             cout << " ";
//         }
//         for(int j = 0; j < elements; j++){
//             cout << i+1;
//         }
//         cout << endl;
//         elements--;
//     }
//     return 0;
// }

// ANOTHER WAY

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;


//     for(int i = 0; i < line; i++){                   // for lines
//         for(int k = 0; k < i; k++){
//             cout << " ";
//         }
//         for(int j = 0; j < line - i; j++){
//             cout << i+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------
// INVERTED Triangle PATTERN
/*
1 1 1 1 
 2 2 2 
  3 3 
   4 
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;
//     int elements = line;


//     for(int i = 0; i < line; i++){                   // for lines
//         for(int k = 0; k < i; k++){
//             cout << " ";
//         }
//         for(int j = 0; j < elements; j++){
//             cout << i+1 << " ";
//         }
//         cout << endl;
//         elements--;
//     }
//     return 0;
// }

// // ANOTHER WAY

// #include<iostream>
// using namespace std;
// int main(){
//     int line;
//     cout << "Enter how many lines you want: ";
//     cin >> line;


//     for(int i = 0; i < line; i++){                   // for lines
//         for(int k = 0; k < i; k++){
//             cout << " ";
//         }
//         for(int j = 0; j < line - i; j++){
//             cout << i+1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------
// INVERTED Triangle PATTERN
/*

*/

#include<iostream>
using namespace std; 
int main(){
    int line = 9;

    for(int i = 0; i < line; i++){                          // for line
        for(int space = 1; space < line - i; space++){          // for space
            cout << " ";
        }
        for(int num1 = 0; num1 < i+1; num1++){
            cout << num1 + 1;
        }
        for(int num2 = i; num2 > 0; num2--){
            cout << num2;
        }
        cout << endl;
    }
    return 0;
}









/*
OUTER LOOP
    ↓
How many rows?
                 
INNER LOOP
    ↓
How many things per row?
*/