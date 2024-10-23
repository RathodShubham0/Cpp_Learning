#include "Car.h"
#include <iostream>
#include <memory>
using namespace std;

void uniquePtrExample() {
    cout << "\n--- Unique Pointer Example ---" << endl;
    unique_ptr<Car> car1 = make_unique<Car>("BMW");
    car1->display();

    // Uncommenting the following line will cause a compile error since unique_ptr cannot be copied
    // unique_ptr<Car> car2 = car1;

    unique_ptr<Car> car3 = move(car1);  // Transfer ownership
    car3->display();
}

void sharedPtrExample() {
    cout << "\n--- Shared Pointer Example ---" << endl;
    shared_ptr<Car> car1 = make_shared<Car>("Audi");
    car1->display();

    shared_ptr<Car> car2 = car1;  // car1 and car2 share the same ownership
    cout << "Use count (owners): " << car1.use_count() << endl;

    car2->display();
}

 

int main() {
    uniquePtrExample();
    sharedPtrExample();
   

    return 0;
}
