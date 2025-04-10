#include <iostream>
#include <vector>
using namespace std;

// Check if string is palindrome
bool isPalin(string s) {
    int st = 0;
    int end = s.size() - 1;
    while (end > st) {
        if (s[st] != s[end]) return false;
        st++;
        end--;
    }
    return true;
}

void getParts(string s, vector<string>& partitions, vector<vector<string>>& ans) {
    if (s.size() == 0) {
        ans.push_back(partitions);
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        string part = s.substr(0, i + 1); // substring from 0 to i
        if (isPalin(part)) {
            partitions.push_back(part);
            getParts(s.substr(i + 1), partitions, ans); // remaining string
            partitions.pop_back(); // backtrack
        }
    }
}

int main() {
    string input = "aab";
    vector<vector<string>> ans;
    vector<string> partition;

    getParts(input, partition, ans);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
