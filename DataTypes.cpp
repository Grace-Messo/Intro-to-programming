// these are the data types
#include <iostream>
using namespace std;

    //Primitive Data Types e.g int, float double, char boolean
    //Derived Data Types e.g array, function, pointer
    //User-Defined Data Types e.g class, struct, union, enum
    //Primitive: they store single values
    //Enum types: they allow you to define a variable that can hold a set of predefined constants
    //Traffic light system using enums
    
enum TrafficLight{ //enum then name. created like class name follows pascal
    RED,
    YELLOW,
    GREEN
};
int main(){
    TrafficLight light = GREEN;
    switch(light){
        case RED:
            cout << "Stop" << endl;
            break;
        case YELLOW:
            cout << "Get Ready" << endl;
            break;
        case GREEN:
            cout << "Go" << endl;
            break;
    }
    return 0;
}