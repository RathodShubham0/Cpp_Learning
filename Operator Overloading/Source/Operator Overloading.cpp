#include "Complex.h"

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "Enter second complex number:\n";
    cin >> c2;
 
    result = c1 * c2;
    cout << "Product: " << result << endl;

    return 0;
}
