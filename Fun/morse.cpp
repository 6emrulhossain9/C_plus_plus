#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

map<char, string> morseEncode = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {' ', "/"}};

map<string, char> morseDecode = {
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'}, {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'}, {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'}, {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'}, {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'}, {"--..", 'Z'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'}, {"....-", '4'}, {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'}, {"-----", '0'}, {"/", ' '}};

string encodeToMorse(string text)
{
    string morseCode = "";
    for (char &c : text)
    {
        c = toupper(c);
        morseCode += morseEncode[c] + " ";
    }
    return morseCode;
}

string decodeFromMorse(string morseCode)
{
    stringstream ss(morseCode);
    string morseLetter;
    string decodedText = "";
    while (ss >> morseLetter)
    {
        decodedText += morseDecode[morseLetter];
    }
    return decodedText;
}

int main()
{
    string choice, text;

    cout << "Choose an option (1- Encode, 2- Decode): ";
    cin >> choice;
    cin.ignore();

    if (choice == "1")
    {
        cout << "Enter the text to encode: ";
        getline(cin, text);
        string morse = encodeToMorse(text);
        cout << "Morse Code: " << morse << endl;
    }
    else if (choice == "2")
    {
        cout << "Enter the Morse code to decode (use space between letters and '/' for spaces): ";
        getline(cin, text);
        string decoded = decodeFromMorse(text);
        cout << "Decoded Text: " << decoded << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
