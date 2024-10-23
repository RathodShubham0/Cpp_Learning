#include "stack.h"
 
template <typename T>
Stack<T>::Stack(int size) : top(-1), capacity(size) {
    array = new T[capacity];
}
 
template <typename T>
Stack<T>::~Stack() {
    delete[] array;
}

 template <typename T>
void Stack<T>::push(T element) {
    if (isFull()) {
        cout << "Stack Overflow. Cannot push " << element << endl;
        return;
    }
    array[++top] = element;
}

 template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow. Cannot pop." << endl;
        exit(EXIT_FAILURE);
    }
    return array[top--];
}

 template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        cout << "Stack is empty. Nothing to peek." << endl;
        exit(EXIT_FAILURE);
    }
    return array[top];
}

 template <typename T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

 template <typename T>
bool Stack<T>::isFull() const {
    return top == capacity - 1;
}

 template class Stack<int>;
template class Stack<float>;
template class Stack<char>;
