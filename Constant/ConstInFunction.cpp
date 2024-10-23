#include "ConstInFunction.h"
#include <iostream>
using namespace std;
 
// Function to display constant value
void displayValue(const int value) {
     cout << "The value is: " << value <<  endl;
    // value = 5; // Error: Cannot modify a const variable
}

// Function to demonstrate const pointer
void modifyArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
         cout << arr[i] <<  endl;
        // arr[i] = 10; // Error: Cannot modify a const array
    }
}