// Chapter-2 Beginning with C++

/*Write a progam to read the values of a,b and c and display the value mof x, where x = a / b - c
    Test your program for the following values:
    a = 250, b = 85, c = 25
    a = 300, b = 70, c = 70
*/
#include <iostream>
using namespace std;
int main() {
    int a,b,c,x;
    cout << "Enter a Number : ";
    cin >> a;
    cout << "Enter b Number : ";
    cin >> b;
    cout << "Enter c Number : ";
    cin >> c;
    x = a / b - c;
    cout << x;
}