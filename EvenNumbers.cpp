//Even numbers from 12 to 28
#include <iostream>
using namespace std;

int main(){
    int num = 12;
    cout << "Even numbers from 12 to 28 are: " << endl;
    while (num <= 28){
        cout << num << " ";
        num += 2;
    }
    cout << endl;
}