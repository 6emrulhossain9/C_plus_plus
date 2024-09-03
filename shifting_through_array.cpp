#include <iostream>
using namespace std;
void leftShift(int arr[], int size, int shift) {
    shift %= size;
    int temp[size];
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[(i + shift) % size];
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void rightShift(int arr[], int size, int shift) {
    shift %= size;
    int temp[size];
    for (int i = 0; i < size; ++i) {
        temp[(i + shift) % size] = arr[i];
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

}

int main() {
    int size, shift, direction;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
       cin >> arr[i];
    }

    cout << "Enter the number of positions to shift: ";
    cin >> shift;

    cout << "Enter the direction to shift (1 for left, 2 for right): ";
   cin >> direction;

    if (direction == 1) {
        leftShift(arr, size, shift);
    } else if (direction == 2) {
        rightShift(arr, size, shift);
    } else {
       cout << "Invalid direction entered." << endl;
        return 1;
    }

   cout << "Shifted array: ";
    printArray(arr, size);

    return 0;
}