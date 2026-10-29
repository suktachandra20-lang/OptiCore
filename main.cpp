#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "   OptiCore C++ Compiler Initialized    " << endl;
    cout << "========================================" << endl << endl;

    
    ifstream inputFile("test.txt");
    if (!inputFile.is_open()) {
        cout << "Error: test.txt file not found!" << endl;
        return 1;
    }

    string line;
    cout << "--- Source Code from test.txt ---" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();

    return 0;
}