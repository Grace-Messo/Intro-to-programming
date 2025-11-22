/*A program to demonstrate the use if if-else-if-else statements
using different levels based on their ages*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
    string name;
    cout << "Welcome to the School Admission Portal!" << endl;
    cout << "Enter the full name of the student: " << endl;
    getline(cin, name);
    cout << "Please enter your age: " <<endl;
    cin >> age;

    if (age>=7 && age<16){
        cout << "Congratulations!" << endl;
        cout << name << " is admitted to grade school." << endl;
    }else if(age>=5 && age <=6){
        cout << "Congratulations!" << endl;
        cout << name << " is admitted to Kindergarten." << endl;
    }else if(age>=3 && age<=4){
        cout << "Congratulations!" << endl;
        cout << name << " is admitted to Preschool." << endl;
    }else if (age >=1 && age<=2){
        cout << "Congratulations!" << endl;
        cout << name << " is admitted to Play Group." << endl;
    }else{
        cout << "Sorry," << name << " does not meet the required age for admission." << endl;
    }
}