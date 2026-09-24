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
//         if ((num % i) == 0){                // means no remained left
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


//// -----------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 10;
//     char s = '*';
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++){
//             cout << " " << s;
//         }
//         cout << endl;
//     }
// }


// // using switch case statement

// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout << "Choose day (1-7): ";
//     cin >> day;

//     switch(day){
//         case 1: 
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4: 
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7: 
//             cout << "Sunday";
//             break;
//         default:
//             cout << "It's invalid Day";
//             break;
//     }

//     return 0;
// }

//// -----------------------------------------------------------------------------------
