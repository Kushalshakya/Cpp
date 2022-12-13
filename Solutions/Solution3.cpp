// Chapter-2 Beginning with C++

//Write a program to input an integer value from keyboard and display on screen "WELL DONE" that many times
#include <iostream>
using namespace std;
int main() {
    int i;
    cout << "Enter Number you want to print \"WELL DONE\" : ";
    cin >> i;
    for(int a=0;a<i;a++){
        cout << "\"WELL DONE\"\n";
    }
}