#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n-i-1]) {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "Palindrome" : "Not Palindrome");
    return 0;
}
