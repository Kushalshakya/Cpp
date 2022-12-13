// Chapter-2 Beginning with C++

//Write a C++ program that will ask for a temperature in Fahrenheit and display it in celsius
#include <iostream>
using namespace std;
int main() {
    double fahrenheit,celsius;
    cout << "Enter Fahrenheit temperature : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << celsius;
    // To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by .5556 (or 5/9)
}