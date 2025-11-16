#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){
    string firstName, middleName, lastName; 
    string fullName, favouriteMeal, favouriteMovie;

    cout << "Enter your first name:";//prompt user for first name
    cin >> firstName;//read first name input
    cout << "Enter your middle name:";//prompt user for middle name
    cin >> middleName;//read middle name input
    cout << "Enter your last name:";//prompt user for last name
    cin >> lastName;//read last name input
    fullName = firstName + " " + middleName + " " + lastName;//concatenate the names to form full name
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // to ignore the newline character left in the buffer
    cout << "Enter your favourite meal:";//prompt user for favourite meal
    getline(cin, favouriteMeal);
    cout << "Enter your favourite movie:";//prompt user for favourite movie
    getline(cin, favouriteMovie);
    cout << "Your First Name: " << firstName << endl;//output the user's first name
    cout << "Your Middle Name: " << middleName << endl;//output the user's middle name
    cout << "Your Last Name: " << lastName << endl;//output the user's last name
    cout << "Your full name is:" << fullName << "." << endl;//output the user's full name
    cout << "Your favourite meal is: " << favouriteMeal << "." << endl;//output the user's favourite meal
    cout << "Your favourite movie is: " << favouriteMovie << "." << endl;//output the user's favourite movie
}