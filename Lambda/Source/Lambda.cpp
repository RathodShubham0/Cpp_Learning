#include "operations.h"

int main() {
    // Initialize a list of integers
    vector<int> numbers = { 1, 5, 3, 9, 2, 8, 6, 7, 4 };

    cout << "Original numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort in ascending order
    sortAscending(numbers);
    cout << "Sorted in ascending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort in descending order
    sortDescending(numbers);
    cout << "Sorted in descending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
