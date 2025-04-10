#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans; // global 


void solve(vector<int>& ip, int tar, int i = 0, vector<int> op = {}) {
    if (tar < 0) return;      //op[j] ke combination sums target se bade hogye
    if (tar == 0) {            
        ans.push_back(op);    //Base case ki tar mil gya
        return;
    }

    for (int j = i; j < ip.size(); j++) {
        op.push_back(ip[j]);                
        solve(ip, tar - ip[j], j, op);     
        op.pop_back();                      //(backtrack)
    }
}

int main() {
    vector<int> ip = {2, 3, 6, 7}; 
    int target = 7;

    vector<int> op;
    solve(ip, target, 0, op);

    
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
