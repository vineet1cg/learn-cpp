#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter No To Print The Pattern : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Increasing part: A to ith character
        for (int j = 1; j <= i; j++) {
            cout << (char)(64 + j) << " ";
        }
        // Decreasing part: (i-1) down to A
        for (int j = i - 1; j >= 1; j--) {
            cout << (char)(64 + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
