// Constant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ConstInFunction.h"
#include <iostream>

int main()
{
	 
	const int const_vari = 33;
	displayValue(const_vari);

	int myArray[] = {1, 2, 3, 4, 5};  // Array defined in main

 
	modifyArray(myArray, 3);
}

 