// Write a C++ program that will ask for a temperature in Fahrenheit and display in Celsius using member functions.
#include <iostream>
using namespace std;
class temp{ //class with conversion obj
    public:
    double fahrenheit,celsius;
    double conversion(double d){ // object with parameters
        fahrenheit = d;
        celsius = (fahrenheit- 32) * 5 / 9;
        return celsius;
    }
};
int main() {
    temp t;
    double d;
    cout << "Enter temperature in Fahrenheit : ";
    cin >> d;
    cout << "Celsius is : " << t.conversion(d);
}