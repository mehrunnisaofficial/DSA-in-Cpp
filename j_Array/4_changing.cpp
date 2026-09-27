// g++ 2_smallest.cpp -o code && code.exe

// changing in array element using function argument

#include<iostream>
using namespace std;

int change_arr(int arr[], int size){
     for(int i = 0; i < size; i++){             // changing in array element is done by pass by refrence ( for more detail checkout POINTER )
        arr[i] = arr[i] * 2;
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];

    for(int i = 0; i < size; i++){
        cout << "Enter the element " << i+1 << ": " ;
        cin >> arr[i];
    }

    cout << "\nBEFORE CHANGE\n";
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << " = " << arr[i];
        cout << "       Index: " << i << endl;
    }

    // PASS BY REFRENCE
    change_arr(arr, size);

    cout << "\nAFTER CHANGE\n";
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << " = " << arr[i];
        cout << "       Index: " << i << endl;
    }
    return 0;
}