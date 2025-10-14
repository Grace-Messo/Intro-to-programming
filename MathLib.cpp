#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //abs(x)
    int x = -10;
    cout << "Absolute value of " << x << " is " << abs(x) << endl;

    //pow(base, exponent)
    double base = 2.0, exponent = 3.0;
    cout << "2^3 = " << pow(base, exponent) <<endl;

    //sqrt(x)
    double x = 9.0;
    cout << "Square root of 9 is " << sqrt(x) << endl;

    //log(x)
    double x = 2.718;
    cout << "ln(e) = " << log(x) << endl;
    return 0;

}