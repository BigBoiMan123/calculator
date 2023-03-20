#include <iostream>
#include <iomanip>
using namespace std;

int intro() {
    cout << "This is a basic calculator written in C++. \n";
    return 0;
    }

int input() {
    float x;
    int y;
    char operation;
    cout << "What operation would you like to perform? (a for addition, s for subtraction, m for multiplication, d for division.) \n";
    cin >> operation;
    cout << "Type the first number. \n";
    cin >> x;
    cout << "Type the second number. \n";
    cin >> y;
    cout << "Calculating! \n";
    switch(operation) {
        case 'a':
            cout << x + y;
            break;
        case 's':
            cout << x - y;
            break;
        case 'm':
            cout << x * y;
            break;
        {
            case 'd':
            double dresult = x / y;
            cout << setprecision(4) << dresult;
            break;
        }
        default:
            cout << "ERROR: Invalid operation specified.";
            break;
        }
    return 0;
    }

int main() {
    intro();
    input();
    return 0;
    }
