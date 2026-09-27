// g++ 2_smallest.cpp -o code && code.exe

// changing in array element using function argument

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int search){
    for(int i = 0; i < size; i++){
        if(arr[i] == search){
            return i;
        }
    }
    return -1;
}

int main(){
    int size, search, got;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];

    cout << "\nGETTING ELEMENTS OF AN ARRAY FROM A USER\n";
    for(int i = 0; i < size; i++){
        cout << "Enter the element " << i+1 << ": " ;
        cin >> arr[i];
    }

    cout << "Which elements you wanna search in an array: ";
    cin >> search;

    cout << "\nSEARCHING...\n";
    got = linearSearch(arr, size, search);

    if (got == -1){
        cout << "Sorryyy... Element Not found";
    }
    else{
        cout << "The searched element " << search << " Found at " << got << "th index";
    }

    
    return 0;
}