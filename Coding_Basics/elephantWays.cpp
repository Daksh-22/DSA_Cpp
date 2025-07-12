#include <iostream>
using namespace std;

int elephantWays(int i, int j) {
    // Base case: If at the origin (0,0)
    if (i == 0 && j == 0) {
        return 1;
    }

    int ans = 0;

    // Move vertically
    for (int k = 0; k < i; k++) {
        ans += elephantWays(k, j);
    }

    // Move horizontally
    for (int k = 0; k < j; k++) {
        ans += elephantWays(i, k);
    }

    return ans;
}

int main() {
    cout << elephantWays(2, 2) << endl;
    return 0;
}
