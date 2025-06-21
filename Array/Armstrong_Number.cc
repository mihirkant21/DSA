#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    int digits = (int)log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}
