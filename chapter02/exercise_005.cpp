#include <iostream>

double celsiu2fahrenit(double);

int main() {

    using namespace std;

    double celsius;
    cout << "Please enter a celsius value: ";
    cin >> celsius;

    cout << celsius << " degrees Celsius is " 
         << celsiu2fahrenit(celsius) << " degrees Fahrenheit." << endl;

    return 0;
}

double celsiu2fahrenit(double celsius) {
    return 1.8 * celsius + 32.0;
}
