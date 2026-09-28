// Add and product all elements in the array
#include<iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int product(int arr[], int size){
    int product = 1;

    for(int i = 0; i < size; i++){
        product = product * arr[i];
    }

    return product;
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

    cout << "\nAll Elements are: " << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }

    int total_sum = sum(arr, size);
    int total_product = product(arr, size);

    cout << endl;

    cout << "Total Sum of all Elements in the given array is: " << total_sum << endl;
    cout << "Total Product of all Elements in the given array is: " << total_product;

    return 0;

}