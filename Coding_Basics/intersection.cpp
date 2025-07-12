#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ispresent[1000005] = {0}; // Frequency array to store occurrences

    // Store frequency of elements in the first array
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ispresent[x]++; // Increase frequency count of the element
    }

    // Process second array and print intersection elements
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (ispresent[x] > 0) { // If the element is present in first array
            cout << x << " ";
            ispresent[x]--; // Reduce frequency to prevent duplicates
        }
    }
    cout << endl;

    return 0;
}
