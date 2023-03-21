/* a very simple calculator written in C++
   licensed under the GNU GPL V3 license
   Copyright 2023 Steven Huang */

// libraries and what not
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// introduce user
int intro() {
    cout << "This is a basic calculator written in C++. \n";
    return 0;
    }

// interactively collect operation and number from user and process it
int input() {

    // declare variables
    float x;
    int y;
    string operationuser;
    int realoperation;

    // ask for the operation and process it
    cout << "What operation would you like to perform? (addition, subtraction, multiplication, division) \n";
    cin >> operationuser;
    if (operationuser == "addition") {
        realoperation = 1;
    }
    if (operationuser == "subtraction") {
        realoperation = 2;
    }
    if (operationuser == "multiplication") {
        realoperation = 3;
    }
    if (operationuser == "division") {
        realoperation = 4;
    }
    if (operationuser != "division" && operationuser != "multiplication" && operationuser != "subtraction" && operationuser != "addition") {
        cout << "ERROR: Invalid operation. \n";
        return 0;
    }
    // ask for the numbers and write them into variables x and y
    cout << "Type the first number. \n";
    cin >> x;
    cout << "Type the second number. \n";
    cin >> y;

    // calculate result and output it
    cout << "Calculating! \n";
    switch (realoperation) {
        case 1:
            cout << x + y;
            break;
        case 2:
            cout << x - y;
            break;
        case 3:
            cout << x * y;
            break;
        {case 4:
            double dresult = x / y;
            cout << setprecision(4) << dresult;
            break;}
        default:
            cout << "ERROR: An unknown error occured.";
        }
    return 0;
    }

// run the damn thing
int main() {
    intro();
    input();
    return 0;
    }
