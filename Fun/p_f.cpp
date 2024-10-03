#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
using namespace std;

void loadingBar(int delay)
{
    cout << "[";
    for (int i = 0; i < 50; i++)
    {
        cout << "#";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << "]\n";
}

void fakeVirusInstallation()
{
    cout << "Starting installation of malicious software..." << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "Deleting system files: ";
    loadingBar(50);
    cout << "Error: Cannot delete file C:\\System32\\kernel.dll" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "Attempting to remove antivirus..." << endl;
    loadingBar(100);
    cout << "Failed! Antivirus too strong!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "Encrypting hard drive: ";
    loadingBar(75);
    cout << "Encryption complete!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "Transferring all personal data to remote server: ";
    loadingBar(100);
    cout << "Transfer complete!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "\n\nJust kidding! No harm done. :) Enjoy your day!" << endl;
}

int main()
{
    srand(time(0));

    cout << "WARNING: Suspicious program detected. Executing in 3 seconds..." << endl;
    this_thread::sleep_for(chrono::seconds(3));

    fakeVirusInstallation();

    return 0;
}
