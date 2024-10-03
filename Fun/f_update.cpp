#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void fakeUpdate()
{
    system("color 1F");
    cout << "\n\n\n\n";
    cout << "Configuring Windows updates 0% complete.\n";
    this_thread::sleep_for(chrono::seconds(2));

    for (int i = 1; i <= 100; i++)
    {
        cout << "\rConfiguring Windows updates " << i << "% complete.";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout << "\nUpdate failed. Reverting changes...\n";
    this_thread::sleep_for(chrono::seconds(3));

    for (int i = 100; i >= 0; i--)
    {
        cout << "\rReverting changes " << i << "% complete.";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout << "\nUpdate successful! Please restart your computer.\n";
}

int main()
{
    fakeUpdate();
    return 0;
}
