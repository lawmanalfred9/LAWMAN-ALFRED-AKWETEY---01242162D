#include <iostream>
#include <algorithm> // for sort

using namespace std;

// The function must take the array and its size
double findMedian(int arr[], int n) {
    if (n <= 0) return 0.0;

    // 1. Sort the array
    sort(arr, arr + n);

    // 2. Check for even/odd
    if (n % 2 != 0) {
        // Odd: Return middle
        return (double)arr[n / 2];
    } else {
        // Even: Average of two middles
        // We cast to double BEFORE adding to prevent integer overflow
        return ((double)arr[n / 2 - 1] + (double)arr[n / 2]) / 2.0;
    }
}

int main() {
    int myNumbers[] = {10, 5, 2, 8}; // Sorted: 2, 5, 8, 10
    int size = 4;

    cout << "Median: " << findMedian(myNumbers, size) << endl; // Output: 6.5
    return 0;
}

