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

    int smallestIndex = 0;

    // FIRST METHOD
    // we will let that int size = +infinity 
    // it means every number will be smaller than this
    int smallest = INT_MAX;  // size of INT_MAX = 2147483674

    cout << "\nFIRST METHOD\n";
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
    }

    cout << "Smallest integer in the array is: " << smallest << endl;
    cout << "It's index is: " << smallestIndex << endl;

    // SECOND METHOD

    cout << "\nSECOND METHOD\n";
    int another_smallest = arr[0]; // or u can take any element and compare with it
    for(int i = 0; i < size; i++){
        if(arr[i] < another_smallest){
            another_smallest = arr[i];
        }
    }
    cout << "Smallest integer in the array is: " << another_smallest << endl;

    // // LETS TAKE ANOTHER ELEMENT - random one
    // // THIRD METHOD

    // this method will only work when u choose the elements which does
    // exist in the array

    cout << "\nTHIRD METHOD\n";
    int anns = arr[3]; // or u can take any element and compare with it
    for(int i = 0; i < size; i++){
        if(arr[i] < anns){
            anns = arr[i];
        }
    }
    cout << "Smallest integer in the array is: " << anns << endl;


    // Fourth Method
    cout << "\nFOURTH METHOD\n";
    for(int i = 0; i < size; i++){
        smallest = min(arr[i], smallest);
    }
    cout << "Smallest integer in the array is: " << smallest << endl;
    return 0;
}