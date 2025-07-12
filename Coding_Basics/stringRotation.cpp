#include <iostream>
using namespace std;

string rotate(string &s, int k) {
    int n = s.length();  
    
    for (int i = 0; i < k; i++) {
        char f = s[0];   
        for (int q = 0; q < n - 1; q++) {
            s[q] = s[q + 1];
        }
        s[n - 1] = f;
    }
    
    return s;  
}


