#include <iostream>
using namespace std;
int main() {
    int n = 50;
    int sum = 0;
    cout << "Even numbers: ";
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << "\nEven nos sum is: " << sum << endl;
    cout << "odd numbers: ";
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << "\nEven nos sum is: " << sum << endl;
    return 0;
}
