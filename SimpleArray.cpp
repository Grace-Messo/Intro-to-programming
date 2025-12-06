#include <iostream>
using namespace std;

int main(){
    cout << "Enter six whole numbers to be stored by this program" << endl;
    int nums[6];
    for (int index = 0; index <= 5; index++){
        cin >> nums[index];
    }

    cout << "You entered the following values: " << endl;
    for (int index = 0; index <= 5; index++){
        cout << nums[index] << " ";
    }
    cout << endl;
    cout << "The size of the array is" << sizeof(nums) << endl;
    return 0;
}