//Checks password. If wrong password is entered 3 times, access is denied.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string correctPassword = "P123";
    string userPassword;
    int maxAttempts = 3;
    int attempts = 0;

    while(attempts < 3){
        cout << "Enter your password: ";
        cin >> userPassword;

        if (userPassword == correctPassword){
            cout << "Logged in: Access Granted!" << endl;
            //Call a function to load the main menu or dashboard here
            return 0;
        }else{
            attempts++;//loop termination statement
            maxAttempts--;
            if (maxAttempts == 0){
                cout << "No attempts left." << endl;
            }else{
            cout << "Incorrect password. Try again. " << maxAttempts << " attempts left." << endl;
            }
        }
    }
    cout << "Password blocked. Contact Administrator." << endl;
    return 0;
}
