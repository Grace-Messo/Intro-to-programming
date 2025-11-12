//To demonstrate the use of variables and data types
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Variable declaration
    float num1, num2;
    //Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    //Perform calculations
    cout << num1<< "+" << num2 << "=" << num1 + num2 << endl; //Addition
    cout << num1<< "-" << num2 << "=" << num1 - num2 << endl; //Subtraction
    cout << num1<< "*" << num2 << "=" << num1 * num2 << endl; //Multiplication
    cout << num1<< "/" << num2 << "=" << num1 / num2 << endl; //Division
    cout << num1 << "%" << num2 << "=" << fmod(num1, num2) << endl; //Modulus
    cout << "Square root of " << num1 << " is " << sqrt(num1) << endl; //Square root
    cout << num1 << " raised to the power of " << num2 << " = " << pow(num1, num2) << endl; //num1 raised to the power of num2
    cout << "Logarithm of " << num1 << " is " << log(num1) << endl; //Logarithm
}