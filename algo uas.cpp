#include <iostream>
using namespace std;

// Linear Search Function
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Binary Search Function
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x) {
            return m;
        }

        // If x greater, ignore left half
        if (arr[m] < x) {
            l = m + 1;
        }
        // If x is smaller, ignore right half
        else {
            r = m - 1;
        }
    }
    return -1;
}

int main() {
	cout<<"Nama : Sadaad Naufal"<<endl;
	cout<<"NIM : 231011401119"<<endl;
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    // Using Linear Search
    int resultLinear = linearSearch(arr, n, x);
    if (resultLinear != -1) {
        cout << "Element found at index (Linear Search): " << resultLinear << endl;
    } else {
        cout << "Element not found (Linear Search)" << endl;
    }

    // Using Binary Search
    int resultBinary = binarySearch(arr, 0, n - 1, x);
    if (resultBinary != -1) {
        cout << "Element found at index (Binary Search): " << resultBinary << endl;
    } else {
        cout << "Element not found (Binary Search)" << endl;
    }

    return 0;
}
