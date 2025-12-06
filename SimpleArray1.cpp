#include <iostream>
using namespace std;

int main(){
    int ten[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum = 0, product = 1;
    for (int index = 0; index < 10; index++){
        sum += ten[index];
        product *= ten[index];
    }
    cout << "The sum of the array elements is: " << sum << endl;
    cout << "The product of the array elements is: " << product << endl;
    cout << "The mean of the array elements is: " << sum/(sizeof(ten)/4) << endl;
    return 0;
}