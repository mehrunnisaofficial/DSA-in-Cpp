// Print all unique number in an array

#include<iostream>
using namespace std;

int main(){
    int size1, size2, greater, smaller;
    cout << "Enter the size of the array 1: ";
    cin >> size1;

    cout << "Enter the size of the array 2: ";
    cin >> size2;

    int arithemetic[size1], number[size2];

    
    cout << endl;
    cout << "\tARRAY 1\t";
    cout << endl;

    cout << "\nTaking Elements from the User" << endl;
    for(int i = 0; i < size1; i++){
        cout << "Element " << i+1 << ": ";
        cin >> arithemetic[i];
    }


    cout << endl;
    cout << "\tARRAY 2\t";
    cout << endl;

    cout << "\nTaking Elements from the User" << endl;
    for(int i = 0; i < size2; i++){
        cout << "Element " << i+1 << ": ";
        cin >> number[i];
    }


    cout << "\nINTERSECTION\n";
    // printing unique elements - 1, 2, 2, 3, 3: than it will only print 1
    for(int i = 0; i < size1; i++){

        for(int j = 0; j < size2; j++){
            if (arithemetic[i] == number[j]){
                cout << arithemetic[i] << " ";
                break;
            }
        }

    }

    

    return 0;
}