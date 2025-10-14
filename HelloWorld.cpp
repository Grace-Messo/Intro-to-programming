// This is my first C++ program
/*Multi-line 
comment*/
#include <iostream> //This is a preprocessor directive, for handling data input and output
#include <ExampleHeader.h> //Including the header file
using namespace std;

int main(){
    displayMessage();//Call the function from the header
    return 0;
}
/*
int main() {
    cout << "Hello World";
    return 0;
}

// A different way to write code
#include <iostream>
int main() {
    std::cout <<"Hello World";
    return 0;
}
*/