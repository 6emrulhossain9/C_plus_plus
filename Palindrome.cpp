#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    int remainder;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number and reversed number are the same
    return originalNumber == reversedNumber;
}

int main() {
    int num;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Call the function
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
