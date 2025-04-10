#include <iostream>
using namespace std;

// Global key 
string keys[] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void phoneKeyPad(char* ip, char* op, int i, int j) {
    // Base case
    if (ip[i] == '\0') {
        op[j] = '\0';
        cout << op << endl;
        return;
    }

    // Recursive case
    int digit = ip[i] - '0';

    // // Skip invalid digits like 0 and 1
    // if (keys[digit] == "") {
    //     phoneKeyPad(ip, op, i + 1, j);
    //     return;
    // }

    for (int k = 0; keys[digit][k] != '\0'; k++) {
        op[j] = keys[digit][k];
        phoneKeyPad(ip, op, i + 1, j + 1);
    }
}

int main() {
    char input[100];
    char output[100];

    cin >> input;
    phoneKeyPad(input, output, 0, 0);
    return 0;
}
