#pragma once
#include <iostream>

class PointerReferenceDemo {
public:

    PointerReferenceDemo();
    ~PointerReferenceDemo();

    void pointerBasics();
    void referenceBasics();
    void dynamicMemoryAllocation();
    void constPointerExample();
    void functionPointerExample();

private:
    int* dynamicPtr; // Pointer for dynamic memory allocation
    int dataMember;
};

// Utility function for function pointer example
void sampleFunction();
