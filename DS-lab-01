#include <iostream>

using namespace std;

int main() {
    int size;

    // Prompt user for array size
    cout << "Enter the size of the array: ";
    cin >> size;

    // Validate input size
    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    // Allocate memory dynamically
    int* arr = new int[size];

    // Get array elements from user
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the entered array
    cout << "\nYou entered the following array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
