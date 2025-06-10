#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    int binary[32]; // To store binary digits
    int i = 0;
    
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    cout << "Binary equivalent: ";
    decimalToBinary(decimal);
    
    return 0;
}