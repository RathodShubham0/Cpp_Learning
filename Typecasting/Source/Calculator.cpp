#include "Calculator.h"

 Calculator::Calculator(int a, float b, double c) {
    num1 = a;
    num2 = b;
    num3 = c;
}

 double Calculator::calculateAverage() {
    // Implicit typecasting happens here (int -> float -> double)
    double average = (num1 + num2 + num3) / 3;

     double explicitAverage = (static_cast<double>(num1) + static_cast<double>(num2) + num3) / 3;

    cout << "Average using implicit typecasting: " << average << endl;
    cout << "Average using explicit typecasting: " << explicitAverage << endl;

    return explicitAverage;
}
