// Swapping Min and max of the array
#include<iostream>
#include<climits>
using namespace std;

int min(int arr[], int size){
    int min = INT_MAX;            // +ve infinity
    int min_index = 0;

    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
            min_index = i;
        }
    }

    return min_index;
}

int max(int arr[], int size){
    int max = INT_MIN;           // -ve infinity
    int max_index = 0;

    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }
    }

    return max_index;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "\nTaking Elements from the User" << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "\nBefore Swapping: " << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }

    int actual_min = min(arr, size);            //min number index
    int actual_max = max(arr, size);            // max number index

    cout << endl;

    cout << "\nAfter Swapping: " << endl;
    swap(arr[actual_min], arr[actual_max]);

    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }
    
    return 0;

}


// g++ 2_smallest.cpp -o code && code.exe