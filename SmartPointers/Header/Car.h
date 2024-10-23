#pragma once
#include <iostream>
#include <memory>
using namespace std;

class Car {
public:
    string brand;
    Car(const string& brand);
    ~Car();

    void display() const;
};
