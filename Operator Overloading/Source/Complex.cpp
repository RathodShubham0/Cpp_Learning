#include "Complex.h"
 
Complex::Complex() : real(0), imag(0) {}
 
Complex::Complex(double r, double i) : real(r), imag(i) {}
 
double Complex::getReal() const {
    return real;
}
 
double Complex::getImag() const {
    return imag;
}
 
Complex Complex::operator * (const Complex& other) const {
    return Complex(
        (real * other.real - imag * other.imag),
        (real * other.imag + imag * other.real)
    );
}
 
ostream& operator << (ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0)
        out << " + " << c.imag << "i";
    else
        out << " - " << -c.imag << "i";
    return out;
}
 
istream& operator >> (istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}
