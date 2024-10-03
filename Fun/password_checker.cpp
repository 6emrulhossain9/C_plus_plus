#include <bits/stdc++.h>

using namespace std;

bool hasUppercase(const string &password) {
    for (char ch : password) {
        if (isupper(ch)) return true;
    }
    return false;
}

bool hasLowercase(const string &password) {
    for (char ch : password) {
        if (islower(ch)) return true;
    }
    return false;
}

bool hasDigit(const string &password) {
    for (char ch : password) {
        if (isdigit(ch)) return true;
    }
    return false;
}

bool hasSpecialChar(const string &password) {
    string specialChars = "!@#$%^&*()-_=+{}[]|\\;:'\",.<>?/";
    for (char ch : password) {
        if (specialChars.find(ch) != string::npos) return true;
    }
    return false;
}

int calculateStrength(const string &password) {
    int score = 0;
    if (password.length() >= 8) score += 1;
    if (hasUppercase(password)) score += 1;
    if (hasLowercase(password)) score += 1;
    if (hasDigit(password)) score += 1;
    if (hasSpecialChar(password)) score += 1;
    return score;
}

string getStrengthMessage(int score) {
    switch(score) {
        case 5: return "Very Strong!";
        case 4: return "Strong!";
        case 3: return "Medium!";
        case 2: return "Weak!";
        case 1: return "Very Weak!";
        default: return "Too Short!";
    }
}

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    int strength = calculateStrength(password);
    cout << "Password Strength: " << getStrengthMessage(strength) << endl;

    return 0;
}
