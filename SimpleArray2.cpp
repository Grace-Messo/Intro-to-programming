#include <iostream>
using namespace std;

int main(){
    int ten[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum = 0, product = 1;
    for (int i : ten){
        //logic to use i
        sum += i;
        product *= i;
    }
    cout << "The sum of the array elements is: " << sum << endl;
    cout << "The product of the array elements is: " << product << endl;
    cout << "The mean of the array elements is: " << sum/(sizeof(ten)/4) << endl;
    return 0;
}