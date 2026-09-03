// Problem 1 : Write your first program

#include<iostream>
using namespace std;
int main(){
    // Multiple ways to print the output
    cout << "Hello World" << endl;
    cout << "Hi it's Mehruu here" << "\n";  
    cout << "Umm I am an AI Engineering student\n";
    cout << "I like BMW" << " But I also like Java Bobber" << "\n";
    cout << "I don't like sweet";
    

    // see how \n works

    cout << endl;       // if u want space between 2 lines u can use this
    cout << "\n";       // or u can use this too
    cout << "Bro let's go outside\nWhere?\nEating Dumplings?";
    return 0;
}


//---------------------------------------------------------------------------------------------------------
// Problem 2: write your first and last name on the same line but the output should show on different lines

#include<iostream>
using namespace std;
int main(){
    cout << "Mehrunnisa\nLove" << endl;
    // another method
    cout << "Mehrunnisa\n" << "Cute" << endl;
}

// ------------------------------------------------------------------------------------

// Problem 3: write a boilerplate code 
#include<iostream>
using namespace std;
int main(){

    return 0;
}

//-------------------------------------------------------------





// this is the boilerplate code which means 
// no matter what cpp code u write u must and must use this structure 
// although in future we will add function and all
// but this is kinda -> did u saw letters for any sentence
// letters are the basic building blocks for a langauge
// same with boilerplate code
// it serve as a basic structure for the code ( like a skeleton in your body )
// boilerplate isn't always literally required. It's code that is commonly repeated or needed as a standard starting structure.




// NOTES

// in comparsion ( in backend ) \n is kinda faster than endl
// but when it comes to seeing this from front we can't able to 
// find as such difference
// endl generally use to show that the line ended and move the cursor to next line
// \n is an escape sequence character and it is also used to move the curson to the next line

/*
see if u wanna run your code in terminal
for windows: 
- first type g++ code.cpp
- than hit enter
- than type ./a.exe

or u can combine : g++ code.cpp; ./a.exe


for MACOS:
- first type g++ code.cpp
- than hit enter 
- than type ./a.out

or u can combine : g++ code.cpp && ./a.out

*/

// these all the green text u r seeing 
// this all is called comment 
// simply a normal langauge in which u can exlain the part of a code
// thats it
// it is ignored by a compiler
// you can read more about it here : https://www.geeksforgeeks.org/cpp/cpp-comments/