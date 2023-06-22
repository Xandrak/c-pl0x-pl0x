#include <iostream>

using namespace std;

// Create a function to convert Celsius degrees to Fahrenheit degrees

double getCelsiusTemp() {
    double degrees_celsius;
    cout << "Hello! Please enter the degrees in Celsius that you want converted to Fahrenheit: ";
    cin >> degrees_celsius;

    return degrees_celsius;
}

double convertCelsiusToFahrenheit (double celsius_degrees) {

    return (celsius_degrees * 1.8) + 32.0;

}

void displayDegrees(double celsius_degrees, double fahrenheight_degrees)
{
    cout << "OK, " << celsius_degrees << " degrees C is " << fahrenheight_degrees << " degrees F!" << endl;
}

int main() {
    double celsius_degrees = getCelsiusTemp();
    double fahrenheight_degrees = convertCelsiusToFahrenheit(celsius_degrees);

    displayDegrees(celsius_degrees, fahrenheight_degrees);

    return 0;
}