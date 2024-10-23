#include "Pointer.h"
using namespace std;
// Ctor 
PointerReferenceDemo::PointerReferenceDemo() : dynamicPtr(nullptr), dataMember(0) {}

// Destructor to clean up dynamic memory
PointerReferenceDemo::~PointerReferenceDemo() {
    if (dynamicPtr != nullptr) {
        delete dynamicPtr;
         cout << "Dynamic memory cleaned up!\n";
    }
}

// Demonstrating pointer basics
void PointerReferenceDemo::pointerBasics() {
    int a = 10;
    int* ptr = &a;  // Pointer stores the address of 'a'
 
     cout << "Pointer points to address: " << ptr << "\n";
     cout << "Value via pointer dereferencing: " << *ptr << "\n";

    *ptr = 20;  // Modify value through pointer
     cout << "Modified value of a through pointer: " << a << "\n\n";
}

// Demonstrating reference basics
void PointerReferenceDemo::referenceBasics() {
    int b = 15;
    int& ref = b;  //  ref is  alias for 'b'

     cout << "Reference Basics:\n";
     cout << "Value of b: " << b << "\n";
     cout << "Reference to b (ref): " << ref << "\n";

    ref = 30;  // Modify value through reference
     cout << "Modified value of b through reference: " << b << "\n\n";
}

// Demonstrating dynamic memory allocation with pointers
void PointerReferenceDemo::dynamicMemoryAllocation() {
    dynamicPtr = new int(50);  // Dynamically allocating memory for an int

     cout << "Dynamic Memory Allocation:\n";
     cout << "Dynamically allocated value: " << *dynamicPtr << "\n\n";
}

// Demonstrating constant pointers and pointer-to-constant
void PointerReferenceDemo::constPointerExample() {
    int x = 100;
    int y = 200;

    const int* ptr1 = &x;  // Pointer to constant int (you can't modify the value)
    int* const ptr2 = &y;  // Constant pointer (you can't change the pointer itself)

     cout << "Const Pointers Example:\n";
     cout << "Pointer to const int (ptr1): " << *ptr1 << "\n";
    // *ptr1 = 150;  // This would give a compilation error

     cout << "Const pointer (ptr2) before modification: " << *ptr2 << "\n";
    *ptr2 = 250;  // Modifying value through const pointer is allowed
     cout << "Const pointer (ptr2) after modification: " << *ptr2 << "\n\n";
}

// Demonstrating function pointers
void PointerReferenceDemo::functionPointerExample() {
    void (*funcPtr)() = &sampleFunction;  // Function pointer declaration
     cout << "Function Pointer Example:\n";
    funcPtr();  // Call the function using the pointer
     cout << "\n";
}

// Utility function to demonstrate function pointers
void sampleFunction() {
     cout << "Hello from sampleFunction!\n";
}

