#pragma once
#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex();
    Complex(double r, double i);

 
    double getReal() const;
    double getImag() const;
 
    Complex operator * (const Complex& other) const;
 
    friend ostream& operator << (ostream& out, const Complex& c);
    friend istream& operator >> (istream& in, Complex& c);
};


