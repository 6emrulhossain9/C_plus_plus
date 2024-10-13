#include <iostream>
using নেমস্পেস std;
int main() 
{
int power;
float base, result = 1;
cin >> base >>power;
while (power != 0) {
    result *= base;
    power--;
}
cout << result;
return 0;
}
