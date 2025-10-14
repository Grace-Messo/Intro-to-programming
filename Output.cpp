#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outfile("output.txt");
    outfile << "Writing to a file." << endl;
    outfile.close();

    //Reading from a file
    ifstream infile("output.txt");
    string content;
    while (std::getline(infile, content))
    {
        cout << content << endl;
    }
    infile.close(); //Close the file after reading its contents

    return 0;
    
}