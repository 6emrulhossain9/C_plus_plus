#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Iterate over each bit in the binary string
    for (int i = 0; i < binary.length(); ++i) {
        // Convert the character '0' or '1' to its numeric value (0 or 1)
        int bit = binary[i] - '0';

        // Calculate the power of 2 for the current position
        int power = binary.length() - 1 - i;

        // Add the corresponding value to the decimal number
        decimal += bit * (1 << power); // Using bit shifting for powers of 2
    }

    cout << "Decimal: " << decimal <<endl;

    return 0;
}

