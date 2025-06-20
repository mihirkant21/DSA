#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            sorted = false;
            break;
        }
    }

    cout << (sorted ? "Array is sorted" : "Not sorted");
    return 0;
}
