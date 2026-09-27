// search the smallest element in an array

#include<iostream>
#include <climits>

using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // getting input
    for(int i = 0; i < size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    // Printing all Array Elements
    for(int i = 0; i < size; i++){
        cout << "ELELMENT " << i+1 << " : " << arr[i] << endl;
    }

    // Print largest elemetn index
    int largestIndex = 0;

    // FIRST METHOD
    // we will let that int size = -infinity 
    // it means every number will be LARGER than this

    int largest = INT_MIN;  // size of INT_MIN = -INT_MAX - 1

    cout << "\nFIRST METHOD\n";
    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
    }
    cout << "Largest integer in the array is: " << largest << endl;
    cout << "Its index is: " << largestIndex << endl;

    
    cout << "\nSECOND METHOD\n";
    int anlarge = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > anlarge){
            anlarge = arr[i];
        }
    }
    cout << "Largest integer in the array is: " << anlarge << endl;


    cout << "\nTHIRD METHOD\n";
    for(int i = 0; i < size; i++){
        if(arr[i] > anlarge){
            largest = max(arr[i], largest);
        }
    }
    cout << "Largest integer in the array is: " << largest << endl;


    cout << "\nFOURTH METHOD\n";
    int largee = arr[2];
    for(int i = 0; i < size; i++){
        if(arr[i] > largee){
            largee = max(arr[i], largest);
        }
    }
    cout << "Largest integer in the array is: " << largee << endl;

    return 0;
}