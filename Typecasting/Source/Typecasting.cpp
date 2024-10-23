#include "Calculator.h"

int main() {
    int intNum;
    float floatNum;
    double doubleNum;

    // Input the numbers
    cout << "Enter an integer: ";
    cin >> intNum;

    cout << "Enter a float: ";
    cin >> floatNum;

    cout << "Enter a double: ";
    cin >> doubleNum;
 
    Calculator calc(intNum, floatNum, doubleNum);
 
    calc.calculateAverage();

    return 0;
}
