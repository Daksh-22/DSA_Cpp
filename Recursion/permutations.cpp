#include <iostream>
#include <vector>
using namespace std;

void getPermutations(vector<int>& nums, int idx, vector< vector<int> >& ans) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        getPermutations(nums, idx + 1, ans);
        swap(nums[idx], nums[i]); // backtrack
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums;
    int x;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    vector< vector<int> > result;
    getPermutations(nums, 0, result);

    cout << "\nAll permutations are:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
