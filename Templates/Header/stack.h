#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
    int top;        // Index of the top element
    int capacity;   // Maximum capacity of the stack
    T* array;       // Array to store the stack elements

public:
 
    Stack(int size);
    ~Stack();
 
    void push(T element);
 
    T pop();
 
    T peek() const;

     bool isEmpty() const;

     bool isFull() const;
};
