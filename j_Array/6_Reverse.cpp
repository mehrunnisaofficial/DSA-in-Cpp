// using 2 pointer approach

#include<iostream>
using namespace std;

int revarray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size, search;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];

    cout << "\nGETTING ELEMENTS OF AN ARRAY FROM A USER\n";
    for(int i = 0; i < size; i++){
        cout << "Enter the element " << i+1 << ": " ;
        cin >> arr[i];
    }

    cout << "\nBefore Swapping\n";
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }

    revarray(arr, size);
    
    cout << "\nAfter Swapping\n";
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }

    return 0;
}

















/*
    Algorithm: Reverse a String Using the Two-Pointer Approach

    1. We take two variables:
       - `start` points to the first character of the string.
       - `end` points to the last character of the string.

    2. We use a while loop that runs as long as `start < end`.
       This means the two pointers have not crossed each other.

    3. Inside the loop, we use the `swap()` function to exchange
       the characters at the `start` and `end` positions.

    4. After swapping:
       - Move `start` one position forward using `start++`.
       - Move `end` one position backward using `end--`.

    5. We repeat the same process:
       - Swap the characters at both ends.
       - Move both pointers toward the middle.

    6. When `start` becomes greater than or equal to `end`,
       the pointers have met or crossed each other.
       At this point, the entire string has been reversed.

    Example:

    String: "HELLO"

    Initially:
        start = 0  -> H
        end   = 4  -> O

    First swap:
        H E L L O
        ↓       ↓
        H       O

        After swap:
        O E L L H

    Move the pointers:
        start = 1  -> E
        end   = 3  -> L

    Second swap:
        O E L L H
          ↓   ↓

        After swap:
        O L L E H

    Move the pointers again:
        start = 2
        end   = 2

    Now start >= end, so we stop.

    Final reversed string:
        "OLLEH"

    Time Complexity: O(n)
    Space Complexity: O(1)

    Continue → start < end
    Stop     → start >= end
*/