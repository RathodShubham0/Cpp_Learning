#include "stack.h"

int main() {
    // Stack of integers
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Top element in int stack: " << intStack.peek() << endl;
    cout << "Popped from int stack: " << intStack.pop() << endl;

    // Stack of floats
    Stack<float> floatStack(3);
    floatStack.push(3.14f);
    floatStack.push(2.71f);
    cout << "Top element in float stack: " << floatStack.peek() << endl;
    cout << "Popped from float stack: " << floatStack.pop() << endl;

    // Stack of characters
    Stack<char> charStack(4);
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');
    cout << "Top element in char stack: " << charStack.peek() << endl;
    cout << "Popped from char stack: " << charStack.pop() << endl;

    return 0;
}
