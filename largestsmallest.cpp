#include <iostream>
using namespace std;
int findLargest(int a,int b,int c) {
    int largest =a;
    if (b > largest) {
        largest =b;
    }
    else if (c > largest) {
        largest =c;
    }
    return largest;
}
int findSmallest(int a, int b, int c) {
    int smallest =a;
    if (b < smallest) {
        smallest =b;
    }
    else if (c < smallest) {
        smallest =c;
    }
    return smallest;
}
int main() {
    int num1,num2,num3;
    cout << "Enter three integers: ";
    cin >>num1 >>num2 >>num3;
    int largest = findLargest(num1,num2,num3);
    int smallest = findSmallest(num1,num2,num3);
    cout << "The largest number is: "<< largest << endl;
    cout << "The smallest number is: "<< smallest << endl;
    return 0;
}