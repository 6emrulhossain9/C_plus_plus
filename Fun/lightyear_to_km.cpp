#include <iostream>
#include <iomanip>

using namespace std;

double lightYearsToKilometers(double lightYears)
{
    const double kilometersPerLightYear = 9.461e12;
    return lightYears * kilometersPerLightYear;
}

void displayDistance(double kilometers)
{
    const double trillion = 1e12;
    const double billion = 1e9;

    cout << fixed << setprecision(2);

    if (kilometers >= trillion)
    {
        cout << kilometers / trillion << " trillion kilometers";
    }
    else if (kilometers >= billion)
    {
        cout << kilometers / billion << " billion kilometers";
    }
    else
    {
        cout << kilometers << " kilometers";
    }
}

int main()
{
    double lightYears;

    cout << "--- Light Year to Kilometers Converter ---" << endl
         << endl;
    cout << "Enter distance in light years: ";
    cin >> lightYears;

    double kilometers = lightYearsToKilometers(lightYears);

    cout << lightYears << " light years is approximately ";
    displayDistance(kilometers);
    cout << "." << endl
         << endl;
    cout << ">>>>>Best of Luck Traveling This Distant<<<<<" << endl;

    return 0;
}
