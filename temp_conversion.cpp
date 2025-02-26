#include <iostream>
using namespace std;

double celsius_to_fahrenheit(double c) {
    return c * 1.8 + 32;
}

double fahrenheit_to_celsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    
    char choice;
    double temp;

    cout << "How do you want to convert your temperature?" << endl;
    cout << "F - Convert Fahrenheit to Celsius" << endl;
    cout << "C - Convert Celsius to Fahrenheit" << endl;

    cin >> choice;

    switch (choice) {
        case 'F':
        case 'f':
            cout << "Please enter Fahrenheit temperature to convert to Celsius: ";
            cin >> temp;
            cout << "Converted temperature: " << fahrenheit_to_celsius(temp) << "°C" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Please enter Celsius temperature to convert to Fahrenheit: ";
            cin >> temp;
            cout << "Converted temperature: " << celsius_to_fahrenheit(temp) << "°F" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 'F' or 'C'." << endl;
    }

    return 0;
}