//Simple do...while loop example in C++
#include <iostream>
using namespace std;

int main(){
    int num = 12;
    do{
        cout << num << ", ";
        num +=2;
    } while(num <= 50);
    cout << "\b" << " " << endl; //to remove last comma

    int  num1 = 12, sum = 0;
    do{
        sum += num1;
        num1 += 2;
    } while(num1 <= 50);
    cout << "Sum: " << sum << endl;

    int num2, sum1=0;
    do{
        cout << "Enter numbers to be added:";//prompting for user input
        cin >> num2;
        sum1 += num2;
    } while(num2 != 0);
    cout << "Sum: " << sum1 << endl;
    return 0;
}