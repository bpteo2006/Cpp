#include <iostream>

int main()
{
    using namespace std;
    double degree_celcius;
    cout << "Please enter temperature in degree celcius: ";
    cin >> degree_celcius;
    cout << "The temperature is " 
        << degree_celcius * 1.8 + 32 << " Fahrenheit.";

    return 0;
}