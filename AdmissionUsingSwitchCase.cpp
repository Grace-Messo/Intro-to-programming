/*Simple admission program to admit students to 
different levels based on their ages using 
switch-case statements*/
#include <iostream>
using namespace std;

int main(){
    int age;
    string name;
    char interest;
    cout << "Enter the full name of the child:" << endl;
    getline(cin, name);
    cout << "Please enter the age of the child:" << endl;
    cin >> age;
    
    if (age >=4 && age<=10){
        cout << "Enter the interest of the child. \n\tS for soccer\n\tA for art\n\tM for music\n\tC for athletics\n\tT for toys\n\tO for other" << endl;
        cin >> interest;
        switch(interest){
            case 'S':
            case 's':
                cout << "Admitted to school" << endl;
                cout << "Assigned to Soccer playgroup." << endl;
            break;
            case 'A':
            case 'a':
                cout << "Admitted to school" << endl;
                cout << "Assigned to Art playgroup." << endl;
            break;
            case 'M':
            case 'm':
                cout << "Admitted to school" << endl;
                cout << "Assigned to Music playgroup." << endl;
            break;
            case 'C':
            case 'c':
                cout << "Admitted to school" << endl;
                cout << "Assigned to Athletics playgroup." << endl;
            break;
            case 'T':
            case 't':
                cout << "Admitted to school" << endl;
                cout << "Assigned to Toys playgroup." << endl;
            break;
            case 'O':
            case 'o':
                cout << "Admitted to school" << endl;
                cout << "Assigned to Other playgroup." << endl;
            break;
        }
    }else{
        cout << "Sorry, " << name << " does not meet the required age for admission." << endl;
    }
}
