// PointersAndReferances.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pointer.h"
int main() {
    PointerReferenceDemo demo;

    demo.pointerBasics();
    demo.referenceBasics();
    demo.dynamicMemoryAllocation();
    demo.constPointerExample();
    demo.functionPointerExample();

    return 0;
}
