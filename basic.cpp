#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos = 2; // Insert at index 2
    int value = 10;

    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = value;
    size++;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
