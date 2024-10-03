#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    srand(time(0));
    cout << "Something seems wrong with the keyboard...\n";
    this_thread::sleep_for(chrono::seconds(2));
    
    while (true) {
        char randomChar = rand() % 94 + 33;  // Generates a random printable character
        cout << randomChar;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100));  // Adjust for speed
    }

    return 0;
}
