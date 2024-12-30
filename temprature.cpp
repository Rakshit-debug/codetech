#include <iostream>
using namespace std;

int main() {
    double f, c, k; 
    int option;

    cout << "------- Choose the following options -------\n" << endl;
    cout << " 1. Celsius to Fahrenheit " << endl;
    cout << " 2. Fahrenheit to Celsius " << endl;
    cout << " 3. Celsius to Kelvin " << endl;
    cout << " 4. Kelvin to Celsius " << endl;

    cout << "\n\n ---- Choose 1, 2, 3, 4 from given menu --- " << endl;
    cin >> option;
    cout << endl;

    switch (option) {
        case 1: {
            cout << "Enter the temperature in Celsius: ";
            cin >> c;
            f = (1.8 * c) + 32.0;
            cout << "\nTemperature in Fahrenheit: " << f << " F" << endl;
        }
        break;

        case 2: {
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> f;
            c = (f - 32) / 1.8;
            cout << "\nTemperature in Celsius: " << c << " C" << endl;
        }
        break;

        case 3: {
            cout << "Enter the temperature in Celsius: ";
            cin >> c;
            k = c + 273.15;
            cout << "\nTemperature in Kelvin: " << k << " K" << endl;
        }
        break;

        case 4: {
            cout << "Enter the temperature in Kelvin: ";
            cin >> k;
            c = k - 273.15;
            cout << "\nTemperature in Celsius: " << c << " C" << endl;
        }
        break;

        default: 
            cout << "Wrong input. Please choose between 1 and 4." << endl;
    }

    return 0;
}
