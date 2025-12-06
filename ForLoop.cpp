//for loop functions
#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    //Print even numbers from 12 to 50 using a for loop
    for (int num = 12; num <= 50; num+=2){
        cout << num << ", ";
        sum += num;
    }
    cout << "\b " << " " << endl; //to remove last comma
    cout << "Sum: " << sum << endl;
}