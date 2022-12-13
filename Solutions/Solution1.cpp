// Chapter-2 Beginning with C++

// Write a program to read two numbers from the keyboard and display the largest value on the screen
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    if(a >= b){
        cout << "A is the Largest Value";
    }
    else{
        cout << "B is the Largest Value";
    }
}
