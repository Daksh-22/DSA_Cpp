#include<iostream>
using namespace std;

int stringToInt(char* a, int i,int num = 0) {
    // Base Case
    if (a[i] == '\0') {
        return num;
    }

    // Recursive Case
    int digit = a[i] - '0';
    num  = num*10 + digit;

    return stringToInt(a,i+1,num);
}
int main() {
    char a[] = "12345";
    cout << stringToInt(a, 0) << endl;  // Output: 12345
    return 0;
}