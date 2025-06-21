#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }

    cout << "After removing duplicates: ";
    for (int i = 0; i <= j; i++) cout << arr[i] << " ";
    return 0;
}
