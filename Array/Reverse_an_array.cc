#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // Create array of size n

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Reverse the array
    for (int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
