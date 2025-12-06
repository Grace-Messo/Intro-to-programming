//Program to output odd numbers 
#include <iostream>
using namespace std;

int main(){
    for (int num = 12; num <= 50; num++){
        if (num %2 != 0){
            cout << num << ", ";
        }
    }
}