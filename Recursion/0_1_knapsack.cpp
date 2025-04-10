#include <iostream>
#include <climits>
using namespace std;

int knapsack(int n, int capacity, int* pr, int* wt) {
    if (n == 0 || capacity == 0) {
        return 0;
    }

    int exc = 0;
    int inc = INT_MIN;

    if (capacity >= wt[n - 1]) {
        inc = pr[n - 1] + knapsack(n - 1, capacity - wt[n - 1], pr, wt);
    }

    exc = knapsack(n - 1, capacity, pr, wt);

    return max(exc, inc);
}

int main() {
    int pr[] = {20, 30, 40, 60};
    int wt[] = {20, 30, 40, 50};

    

    cout << "Maximum profit: " << knapsack(4,60,pr,wt) << endl;

    return 0;
}
