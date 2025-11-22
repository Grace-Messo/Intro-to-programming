#include <iostream>
using namespace std;

int main(){
    int age;
    string interest;
    cout << "Please enter the age." << endl;
    cin >> age;
    
    /*if (age>=4){
        cout <<"Admit to school." << endl;
    }//if statement
    if (age>=4){
        cout <<"Admit to school." << endl;
    }else{
        cout << "Declined! Minimum age not reached." << endl;
    }//if-else statement
    if (age>=4 && age<=15){
        cout <<"Admit to school." << endl;
    }else{
        cout << "Declined! Minimum age not reached." << endl;
    }//two condition if-else statement*/
    //nested if
    if (age>=4 && age<=15){
        cout << "Enter the child's interest: " << endl;
        cin >> interest;
        if (interest == "Soccer" || interest == "soccer"){
            cout << "Admitted to school" << endl;
            cout << "Assigned to Soccer playgroup" << endl;
        }else if(interest == "Art" || interest == "art"){
            cout << "Admitted to school" << endl;
            cout << "Assigned to Art playgroup" << endl;
        }else{
            cout << "Admitted to school." << endl;
            cout << "Assigned to other playgroup." << endl;
        }

    }else{
        cout << "Declined: Not admitted to school." << endl;
    }
    return 0;
}