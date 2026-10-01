#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    int size;
    cout << "Enter how many elements u wanna store: ";
    cin >> size;

    //Input
    for(int i = 0; i < size; i++){
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;

        vec.push_back(value);
    }

    cout << "Size of vector now: " << vec.size() << endl;

    // Output
    cout << "All elements are: " << endl;
    for(int i : vec){
        cout << i << endl;
    }

    cout << "First Element is: " << vec.front() << endl;
    cout << "Last Element is: " << vec.back() << endl;

    // access elements at the particular index
    cout << vec[2] << endl;
    //another way to do the same thing is:
    cout << vec.at(2) << endl;


    cout << "Remove all elements one by one" << endl;
    for(int i = 0; i < size; i++){
        vec.pop_back();
    }

    cout << "Size of vector now: " << vec.size() << endl;
    
    return 0;
}