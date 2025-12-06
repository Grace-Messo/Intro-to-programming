#include <iostream>
using namespace std;

int main(){
    int oneDArray[5];//This is an array to store 5 elements
    //Declare and initialize a 2D array using an initializaition list
    int twoDArray[3][4]={{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};//3 arrays to store 4 elements each
    //twoDArray[0][1] = 2;

    //using a loop to print elements of the 2D array
    for (int r = 0; r < 3; r++){//r=the index of the rows/lists in the 2D array
        for (int c = 0; c < 4; c++){//c=the index of each element in each row/list
            cout << twoDArray[r][c] << " ";
        }
        cout << endl;
    }
}