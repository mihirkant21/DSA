#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        // print spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // print stars
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}