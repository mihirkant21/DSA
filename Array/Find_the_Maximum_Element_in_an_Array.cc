#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 91, 56, 10};
    int n = 5, max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Maximum element is " << max;
    return 0;
}
