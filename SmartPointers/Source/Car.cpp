#include "Car.h"

Car::Car(const string& brand) : brand(brand) {
    cout << "Car " << brand << " is created." << endl;
}

Car::~Car() {
    cout << "Car " << brand << " is destroyed." << endl;
}

void Car::display() const {
    cout << "Car brand: " << brand << endl;
}
