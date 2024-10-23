#include "exception_demo.h"
using namespace std;

 
void ExceptionDemo::throwStandardException() {
    throw  runtime_error("Standard runtime error occurred!");
}
 
void ExceptionDemo::throwCustomException() {
    throw MyCustomException("Custom exception: Something went wrong!");
}
 
void ExceptionDemo::demonstrateHandling() {
    try {
         cout << "Trying to throw a standard exception...\n";
        throwStandardException();
    }
    catch (const  runtime_error& e) {
         cout << "Caught standard exception: " << e.what() <<  endl;
    }

    try {
         cout << "Trying to throw a custom exception...\n";
        throwCustomException();
    }
    catch (const MyCustomException& e) {
         cout << "Caught custom exception: " << e.what() <<  endl;
    }

    try {
         cout << "Trying to divide by zero...\n";
        //int result = 10 / 0;
        // cout << "Result: " << result <<  endl;
    }
    catch (...) {
         cout << "Caught an unknown exception!\n";
    }
}
 

