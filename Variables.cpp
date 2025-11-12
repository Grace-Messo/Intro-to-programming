//exploring different types of variables in C++
#include <iostream>
using namespace std;

//global variable
int globalVar = 10;

//constant variable parameters are used to pass data into the function when the function is called
const string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

void loginFunction(string userName, string password){
    string userName = "grace";
    string password = "mypassword";
    if (userName == "grace" && password == "mypassword"){
        cout << "Login Successful!" << endl;
    }else{
        cout << "Login Failed!" << endl;
    }
    
}
//static variable declared inside a function retains its value between function calls
int main(){
    //local variable
    int localVar = 5;
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Constant Variable (Wednesday): " << weekdays[2] << endl;
    return 0;
}