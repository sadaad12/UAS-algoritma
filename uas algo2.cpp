#include <iostream>
using namespace std;

// Fungsi menggabungkan dua array terurut
void mergeArray(int arr1[], int n, int arr2[], int m, int arrHasil[]) {
    int i = 0, j = 0, k = 0;

    // Menggabungkan array
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arrHasil[k++] = arr1[i++];
        } else {
            arrHasil[k++] = arr2[j++];
        }
    }

    // Menyalin sisa elemen
    while (i < n) {
        arrHasil[k++] = arr1[i++];
    }
    while (j < m) {
        arrHasil[k++] = arr2[j++];
    }
}

// Fungsi mencetak array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	cout<<"Nama : Sadaad Naufal"<<endl;
	cout<<"nim : 231011401119"<<endl;
    int arr1[] = {1, 3, 5, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arrHasil[n + m];

    mergeArray(arr1, n, arr2, m, arrHasil);

    cout << "Array 1: ";
    printArray(arr1, n);

    cout << "Array 2: ";
    printArray(arr2, m);

    cout << "Array Hasil: ";
    printArray(arrHasil, n + m);

    return 0;
}

