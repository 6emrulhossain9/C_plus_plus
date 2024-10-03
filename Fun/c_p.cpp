#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void blueScreen()
{
    system("color 1F");
    cout << "\n\n\n\n";
    cout << "A problem has been detected and Windows has been shut down to prevent damage.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "If this is the first time you've seen this stop error screen, restart your computer.\n";
    cout.flush();
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\nTechnical Information: \n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "*** STOP: 0x000000F4 (0x00000003, 0x82B8B9E0, 0x82B8BB4C, 0x805D2978)" << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\nCollecting data for crash dump...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Dump complete.\n";
}

int main()
{
    blueScreen();
    return 0;
}
