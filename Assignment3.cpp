#include <iostream>
using namespace std;

int main(){
    //COMPARISON LOGICAL OPERATORS
    int x = 5;
    cout << (x<10 && x>1) << endl; //logical and - returns 1 if the number is less than 10 AND greater than 1
    cout << (x<10 || x>1) << endl; //logical or - returns 1 if the number is less than 10 OR greater than 1
    cout << !(x<10 && x>1) << endl; //logical not - returns 0 if the result is true

    //BOOLEAN OPERATORS
    int y = 10;
    int z = 30;
    cout << (x >y) << endl; //outputs 1 if true and 0 if false
    
    //POINTER OPERATIONS
    int word = 30;
    int *pword = &word; //pointer variable that stores the address of word variable
    cout << "The address of word is "<<pword << endl; // this displays the address of the variable
    cout << "The value of word is "<<*pword << endl; // this displays the value of the variable using dereferencing

    //TERNARY OPERATOR
    int a = 80;
    int b = 100;
    int max = (a > b) ? a : b; // if a is greater than b, max is a, otherwise max is b
    cout << "The maximum value is " << max << endl;

    return 0;
}