#include <iostream>
#include <string>
using namespace std;
string encrypt(const string &message, int key)
{
    string encryptedMessage = "";
    for (char c : message)
    {
        if (isalpha(c))
        {
            char offset = isupper(c) ? 'A' : 'a';
            c = (c - offset + key) % 26 + offset;
        }
        encryptedMessage += c;
    }
    return encryptedMessage;
}
string decrypt(const string &message, int key)
{
    return encrypt(message, 26 - key);
}
int main()
{
    int choice;
    string message;
    int key;

    cout << "Choose an option:\n";
    cout << "1. Encrypt a message\n";
    cout << "2. Decrypt a message\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    cin.ignore();

    if (choice == 1)
    {
        cout << "Enter the message to encrypt: ";
        getline(cin, message);

        cout << "Enter the encryption key (0-25): ";
        cin >> key;

        string encryptedMessage = encrypt(message, key);
        cout << "Encrypted message: " << encryptedMessage << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter the encrypted message: ";
        getline(cin, message);

        cout << "Enter the decryption key (0-25): ";
        cin >> key;

        string decryptedMessage = decrypt(message, key);
        cout << "Decrypted message: " << decryptedMessage << endl;
    }
    else
    {
        cout << "Invalid choice! Please enter 1 or 2." << endl;
    }

    return 0;
}
