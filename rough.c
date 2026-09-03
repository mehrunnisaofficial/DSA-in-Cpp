// #include<stdio.h>

// int searching(int arr[], int x, int n){
//     int low = 0;
//     int high = n-1;

//     while (low <= high){
//         int mid = low + (high - low)/2;

//         if(arr[mid] == x){
//             return mid;
//         }

//         if(arr[mid] < x){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }

//     }
//     return -1;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/ sizeof(arr[0]);
//     int find = 3;

//     int result = searching(arr, find, size);
//     if (result == -1){
//         printf("ELEMENT NOT FOUND");
//     }
//     else{
//         printf("Element %d found at %d index", find, result);
//     }

//     return 0;
// }



/*
#include<stdio.h>

int searching(int arr[], int x, int n){
    for(int i = 0; i < n ; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int find = 3;

    int result = searching(arr, find, size);
    if (result == -1){
        printf("ELEMENT NOT FOUND");
    }
    else{
        printf("Element %d found at %d index", find, result);
    }

    return 0;
}
*/



#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter the row and column of 1st matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter the row and column of 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("multiplication not possible\n");
        return 0;
    }

    // FIX 1: Declare the Variable Length Arrays AFTER getting their dimensions
    int firstArr[r1][c1], secondArr[r2][c2], result[r1][c2];

    // Input of first matrix
    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            // FIX 2: Corrected 'print' to 'printf'
            printf("Enter the element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &firstArr[i][j]);
        }
    }

    // Input of second matrix
    printf("Enter elements of 2nd matrix:\n");
    // FIX 3: Changed loop limits to r2 and c2 for the second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter the element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &secondArr[i][j]);
        }
    }

    // Initialising result array with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplying matrix
    for (int i = 0; i < r1; i++) {
        // FIX 4: The middle loop must go up to columns of the result matrix (c2)
        for (int j = 0; j < c2; j++) {
            // FIX 5: The inner loop iterates through the common dimension (c1 or r2)
            for (int k = 0; k < c1; k++) {
                result[i][j] += firstArr[i][k] * secondArr[k][j];
            }
        }
    }

    // Array representation
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            // FIX 6: Corrected formatting for printf
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
