#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    cout << "WARNING: Virus detected! System will be wiped in 10 seconds...\n";
    for (int i = 10; i > 0; i--) {
        cout << "Time left: " << i << " seconds...\n";
        this_thread::sleep_for(chrono::seconds(1));  // Wait for 1 second
    }
    cout << "Deleting all files...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "ERROR: Access denied! Virus failed to delete files.\n";
    cout << "You're safe! Just kidding, it's a prank :)\n";
    return 0;
}

