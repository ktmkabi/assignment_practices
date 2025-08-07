#include <iostream>
using namespace std;

// Function to create array dynamically
int* createarray(int size) {
    return new int[size + 1];  // +1 for new element
}

// Function to get array elements
int getelements(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return 0;
}

// Function to insert the element at given position
int insert(int* arr, int size, int pos, int elem) {
    if (pos > size) {
        cout << "Invalid Input" << endl;
        return -1;
    }

    // Shift elements to make space
    for (int i = size; i > pos - 1; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = elem;

    cout << "Array after insertion is:" << endl;
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << endl;  // Each element on new line
    }

    return 0;
}

int main() {
    int size;
    cin >> size;

    int* arr = createarray(size);
    getelements(arr, size);

    int pos, elem;
    cin >> pos >> elem;

    insert(arr, size, pos, elem);

    delete[] arr;  // Free memory
    return 0;
}
