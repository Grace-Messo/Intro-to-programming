//A program to test the operators in C++
#include <iostream>
using namespace std;

int main(){
    //Variable declaration
    int num1, num2;

    //Arithmetic operators
    //ADDITION: 5 + 3 = 8
    cout << "ADDITION" << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    //SUBTRACTION: 5 - 3 = 2
    cout << "SUBTRACTION" << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    //MULTIPLICATION: 5 * 3 = 15
    cout << "MULTIPLICATION" << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    //DIVISION: 6 / 3 = 2
    cout << "DIVISION" << num1 << "/" << num2 << "=" << num1 / num2 << endl;
    //MODULUS: 5 % 3 = 2
    cout << "MODULUS" << num1 << "%" << num2 << "=" << num1 % num2 << endl;
    //PRE-INCREMENT: ++5 = 6
    cout << "PRE-INCREMENT" << "++" << num1 << "=" << ++num1 << endl;
    //POST-INCREMENT: 5++ = 6
    cout << "POST-INCREMENT" << num1 << "++" << "=" << num1++ << endl;
    //PRE-DECREMENT: --5 = 4
    cout << "PRE-DECREMENT" << "--" << num1 << "=" << --num1 << endl;
    //POST-DECREMENT: 5-- = 4
    cout << "POST-DECREMENT" << num1 << "--" << "=" << num1-- << endl;
    //COMBINED INCREMENT AND ASSIGNMENT: num1 += num2
    cout << "COMBINED INCREMENT AND ASSIGNMENT: num1 += num2" << num1 << "+=" << num2 << "=" << (num1 += num2) << endl;
    
}