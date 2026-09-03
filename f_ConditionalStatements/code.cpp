// IF ELSE STATEMENTS

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string name;
//     cout << "Enter the name of the Student: ";
//     cin >> name;

//     int marks;
//     cout << "Enter total marks of " << name << ": ";
//     cin >> marks;


//     if (marks > 100){
//         cout << "Invalid Marks";
//     }
//     else if ((marks <= 100) && (marks > 90)) {
//         cout << "Excellent Result";
//     }
//     else if ((marks <= 90) && (marks >= 70)){
//         cout << "Great Keep it up!!!";
//     }
//     else if ((marks < 70) && (marks >= 50)){
//         cout << "Good";
//     }
//     else {
//         cout << "umm try hard next time";
//     }
//     return 0;
// }


// -----------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     bool isPrime = true;

//     for(int i = 2; i < num; i++){
//         if ((num % i) == 0){
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true){
//         cout << "Prime Number";
//     }
//     else{
//         cout << "Non Prime Number";
//     }
    
//     return 0;
// }

//ANOTHER WAY

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     bool isPrime = true;

//     for(int i = 2; i * i <= num; i++){
//         if ((num % i) == 0){
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true){
//         cout << "Prime Number";
//     }
//     else{
//         cout << "Non Prime Number";
//     }
    
//     return 0;
// }


// -----------------------------------------------------------------------------------

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


#include<iostream>
using namespace std;

int main(){
    int n = 10;
    char s = '*';
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << " " << s;
        }
        cout << endl;
    }
}