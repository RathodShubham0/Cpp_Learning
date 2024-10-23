#include "ConstClass.h"
 

// Constructor definition
ConstClass::ConstClass(int i, int v) : id(i), value(v) {}

// Constant member function (cannot modify any member variables)
int ConstClass::getValue() const {
    //  id = 99;   // Error: Cannot modify member variables in const function
    // value = 100; // Error: Cannot modify member variables in const function
    return value;
}

// Regular member function (can modify member variables)
void ConstClass::setValue(int v) {
    value = v;
 }