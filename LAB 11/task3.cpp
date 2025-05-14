#include <iostream>
#include <exception>
using namespace std;

class InvalidTemperatureException : public exception {};

template <typename T>
double convertToFahrenheit(T celsius) {
    if (celsius < -273.15)
        throw InvalidTemperatureException();
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    try {
        cout << "Attempting to convert -300C..." << endl;
        double result = convertToFahrenheit(-300.0);
        cout << "Fahrenheit: " << result << endl;
    } catch (const InvalidTemperatureException& e) {
        cout << "Caught InvalidTemperatureException - what(): " << e.what() << endl;
    }
    return 0;
}
