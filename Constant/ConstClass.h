#pragma once
class ConstClass
{
    const int id; // Constant data member
    int value;

public:
    // Constructor
    ConstClass(int i, int v);

    // Constant member function
    int getValue() const;

    // Regular member function
    void setValue(int v);

};

