// Print all unique number in an array

#include<iostream>
using namespace std;

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

    int total= 0;
    // printing unique elements - 1, 2, 2, 3, 3: than it will only print 1
    for(int i = 0; i < size; i++){
        int count = 0;
        

        for(int j = 0; j < size; j++){
            if (arr[i] == arr[j]){
                count ++;
            }
        }

        if (count == 1){
            cout << "Unique Element -> Index " << i << ": " << arr[i] << endl;
            total++;
        }
    }

    cout << "Total Unique Numbers are " << total << endl;
    

    return 0;
}