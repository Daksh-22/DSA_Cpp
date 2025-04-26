#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of entries: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    vector<int> ans(n, 0);
    stack<int> s; // Store indices

    for (int i = n-1; i <=0; i--) {
        // Pop smaller elements
        while (!s.empty() && arr[s.top()] <= arr[i]) {
            s.pop();
        }
       
        if (s.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = arr[s.top()];
        }

        s.push(i); // Push index
    }

    cout << "Next greater elements to the left are: ";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
