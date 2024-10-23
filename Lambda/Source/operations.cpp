#include "operations.h"
#include <numeric>
#include <algorithm>
// Sort the data in ascending order using a lambda
void sortAscending(vector<int>& data) {
    sort(data.begin(), data.end(), [](int a, int b) { return a < b; });
}

// Sort the data in descending order using a lambda
void sortDescending(vector<int>& data) {
    sort(data.begin(), data.end(), [](int a, int b) { return a > b; });
}
