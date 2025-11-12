#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int area, length=8, width =5;
    area = length*width;
    cout << "Area = " << area << ".\n";

    string text;
    cout << "Enter a word: ";
    cin >> text;
    cout << "You entered: " + text + "\n";
    return 0;
}