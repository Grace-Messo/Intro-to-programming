//A program to demonstrate the use of switch-case statements
#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter a day number (1 for Monday, 2 for Tuesday, ..., 5 for Friday): ";
    cin >> day;

    switch(day){
        case 1:
        cout << "You have the following units on Monday: " << endl;
        cout << "8:15 am - 11.15 am - BBIT 1106: Math for Business \n 12.15 pm - 2.15 pm - BBIT 1102: Intro to Programming" << endl;
        break;
        case 2:
        cout << "You have the following units on Tuesday: " << endl;
        cout << "8:15 am - 11.15 am - Intro to Programming \n 12.15 pm - 2.15 pm - BBIT 1104: Intro to Ethics" << endl;
        break;
        case 3:
        cout << "You have the following units on Wednesday: " << endl;
        cout << "8:15 am - 11.15 am - BBIT 1108: Business Communication \n 12.15 pm - 2.15 pm - BBIT 1106: Math for Business" << endl;
        break;
        case 4:
        cout << "You have the following units on Thursday: " << endl;
        cout << "8.15 am - 11.15 am - BBIT 1104: Intro to Ethics \n 12.15 pm - 2.15 pm - BBIT 1108: Business Communication" << endl;
        break;
        case 5:
        cout << "You have the following units on Friday: " << endl;
        cout << "8:15 am - 11.15 am - BBIT 1103: Business Computing" << endl;
        break;
        default:
        cout << "No classes scheduled for this day. Please enter a valid number (1-5)." << endl;
    }
    return 0;
}