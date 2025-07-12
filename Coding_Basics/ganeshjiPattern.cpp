#include <iostream>
using namespace std;

void ganeshPattern(int n) {
    if (n < 5 || n % 2 == 0) {
        cout << "Please enter an odd number >= 5 for a proper pattern." << endl;
        return;
    }

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
           
            if (i < n / 2 && (j == 0 || j >= n / 2))
                cout << "* ";
            else if (i == n / 2 || j == n / 2)
                cout << "* ";
            else if (i >= n / 2 && (j == n - 1 || j <= n / 2))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter an odd number (>=5) for the pattern: ";
    cin >> n;
    ganeshPattern(n);
    return 0;
}
