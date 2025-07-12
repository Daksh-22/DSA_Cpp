#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000005]; // Large enough array to handle constraints

    int ones = 0, zeros = 0, twos = 0;

    // Count occurrences of 0, 1, and 2
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) zeros++;
        else if (a[i] == 1) ones++;
        else if (a[i] == 2) twos++;
    }

    // Overwrite the array with sorted values
    int index = 0;

    while (zeros--) a[index++] = 0;  // Fill zeros
    while (ones--) a[index++] = 1;   // Fill ones
    while (twos--) a[index++] = 2;   // Fill twos

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
