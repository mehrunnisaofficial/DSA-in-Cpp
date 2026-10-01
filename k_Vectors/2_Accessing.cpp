#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vct = {1, 2, 3, 4, 5};

    cout << "Without loops" << endl;
    cout << vct[0] << endl;
    cout << vct[1] << endl;
    cout << vct[2] << endl;
    cout << vct[3] << endl;
    cout << vct[4] << endl;

    cout << "\nWith loops" << endl;
    // using for each loop
    for(int i : vct){
        cout << i << endl;           // now here it doesnt print index rather the value at index
    }


    cout << "\nWith loops another way" << endl;
    // another way
    for(int i = 0; i < vct.size(); i++) {
        cout << vct[i] << " ";
    }
}