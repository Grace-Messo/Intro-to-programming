#include <iostream>
using namespace std;

int main(){
    string food;
    char resp;

    cout << "Please enter the food you like: " << endl;
    getline(cin, food);
    cout << "Do you wish to continue (Y/N)?";
    cin >> resp;
    while (resp != 'N' && resp != 'n')//(resp != 'Y' && resp != 'y')
    {
        cout << "You like " << food << "."<< endl;
        cin.ignore(); // to ignore the newline character left in the buffer
        cin.clear();
        cout << "Please enter another food you like: " << endl;
        getline(cin, food);
        cout << "Do you wish to continue (Y/N)?";
        cin >> resp;
    }
}