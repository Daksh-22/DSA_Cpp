#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// class stack {
//     vector<int> v;

// public:
//     void push(int val) {
//         v.push_back(val);
//     }

//     void pop() {
//             v.pop_back();
//     }

//     int top() {
//         return v[v.size() - 1];
//     }

//     bool isEmpty() {
//         return v.size() == 0;
//     }
// };

int main() {
    stack <int> s;
    s.push(10);
    s.push(20);
    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    // cout << "Is empty: " << s.isEmpty() << endl;
    return 0;
}
