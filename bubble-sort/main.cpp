#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 8, 9, 2, 6, 3};

    cout << "Unsorted Array : ";
    for (int i=0; i<6; i++) {
        cout << arr[i] << ' ';
    }

    int temp;

    for (int i=0; i<6; i++) {
        for (int j=(i+1); j<6; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl << "Asc Sorted Array : ";
    for (int i=0; i<6; i++) {
        cout << arr[i] << ' ';
    }
}
