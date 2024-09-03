//code for printing array in reversed order
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size) {
    cout << "Array in forward order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array in reverse order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[size - 1 - i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}
