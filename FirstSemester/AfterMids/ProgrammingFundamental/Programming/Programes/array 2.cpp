#include<iostream>
#include<conio.h>
using namespace std;

// Function to search for an element in the array and update it
void updateElement(int arr[], int size, int oldVal, int newVal) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == oldVal) {
            arr[i] = newVal;
            cout << "Element updated successfully.\n";
            return; // Exit the function once the update is done
        }
    }
    cout << "Element not found in the array.\n";
}

int main() {
    int n, pos;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to update: ";
    int oldVal;
    cin >> oldVal;

    cout << "Enter the new value: ";
    int newVal;
    cin >> newVal;

    updateElement(arr, n, oldVal, newVal);

    cout << "New Array is:";
    for (int i = 0; i < n; i++) {
        cout << "  " << arr[i];
    }
    cout << endl;

    return 0;
}
