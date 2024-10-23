#include "constant_pointer.h"
 #include <iostream>
using namespace std;

void constantPointer(const int* ptr) {
    // *ptr = 10; // Error: Cannot modify const data through pointer
     cout << "Value: " << *ptr <<  endl;
}

void pointerToConstant(int* const ptr) {
    *ptr = 20; // Allowed: Can modify data
    // ptr = nullptr; // Error: Cannot change const pointer's address
}
