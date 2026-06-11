#include <iostream>
#include <fstream>

using namespace std;

// ofstream - Output File System

int main() {
    ofstream myFile;

    /// ios::out - Default, menulis file 

    myFile.open("data1.txt");
    myFile << "Hello data 1";
    myFile.close();

    myFile.open("data2.txt");
    myFile << "Hello data 2\n";
    myFile.close();

    return 0;
}