//A program to test the operators in C++
#include <iostream>
using namespace std;

int main(){
    //Variable declaration
    int num1=16, num2=4;

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
    //COMBINED MULTIPLY AND ASSIGNMENT: num1 *= num2
    cout << "COMBINED MULTIPLY AND ASSIGNMENT: num1 *= num2" << num1 << "*=" << num2 << "=" << (num1 *= num2) << endl;
    //COMBINED DIVIDE AND ASSIGNMENT: num1 /= num2
    cout << "COMBINED DIVIDE AND ASSIGNMENT: num1 /= num2" << num1 << "/=" << num2 << "=" << (num1 /= num2) << endl;

    //COMPARISON/LOGICAL OPERATORS
    cout << "3>2=" << (3 > 2) << endl; //greater than
    cout << "3<2=" << (3 < 2) << endl; //less than
    cout << "4>=3=" << (4 >= 3) << endl; //greater than or equal to
    cout << "4<=3=" << (4 <= 3) << endl; //less than or equal to
    cout << "3==3=" << (3 == 3) << endl; //equal to
    cout << "!(4>=3)" << !(4 >= 3) << endl; //not operator

    //BOOLEAN OPERATORS (AND &&, OR ||)
    cout << "true && true = "<< ((3>2) && (4>=2)) << endl;
    cout << "true && false = "<< ((3>2) && (4<=2)) << endl;
    cout << "false && true = "<< ((3<2) && (4<=2)) << endl;    
    cout << "false && false = "<< ((3<2) && (4<=2)) << endl;

    //BOOLEAN OR
    cout << "true || true = "<< ((3>2) || (4>=2)) << endl;
    cout << "true || false = "<< ((3>2) || (4<=2)) << endl;
    cout << "false || true = "<< ((3<2) || (4>=2)) << endl;    
    cout << "false || false = "<< ((3<2) || (4<=2)) << endl;

    //POINTER OPERATIONS

}