#include <iostream>
using namespace std;

//Creating a namespace called MyNamespace
namespace MyNamespace
{
    int myVariable = 10;
    void myFunction()
    {
        cout << "Hello from MyNamespace!" << endl;
    }
}

int main()
{
    //Accessing a variable from MyNamespace
    cout << "Variable from namespace: " << MyNamespace::myVariable << endl;
    //Accessing a function from MyNamespace
    MyNamespace::myFunction();
    return 0;
}