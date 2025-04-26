#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                cout << "False\n";
                return 0;
            }
            if ((st.top() == '(' && s[i] == ')') ||
                (st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']')) {
                st.pop();
            } else {
                cout << "False\n";
                return 0;
            }
        }
    }

    if (st.empty()) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}
