#include <iostream>
using namespace std;

int main(){
    int age;
    string name;
    cout << "Welcome to the School Admission Portal!" << endl;
    cout << "Enter the full name of the student: " << endl;
    getline(cin, name);
    cout << "Please enter your age: " <<endl;
    cin >> age;

    switch (age){
        case 1:
        case 2:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to Play Group." << endl;
        break;
        case 3:
        case 4:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to Preschool." << endl;
        break;
        case 5:
        case 6:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to Kindergarten." << endl;
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to grade school." << endl;
        break;
        default:
            cout << "Sorry," << name << " does not meet the required age for admission." << endl;   
    }
}