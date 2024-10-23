#pragma once
#include <iostream>

using namespace std;

class Calculator {
public:
    Calculator(int a, float b, double c);
    double calculateAverage(); // Method to calculate average
private:
    int num1;
    float num2;
    double num3;
};
