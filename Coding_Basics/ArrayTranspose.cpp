#include <iostream>
using namespace std;


int main() {
    int a[100][100];
    int n,m;
    int nos = 1 ;
    cin >>n >> m;

    for (int i = 0; i<n; ++i){
        for (int j = 0; j < m; ++j) {
            a[i][j] = nos++;
        }
    }

    for (int i = 0; i<n-1; ++i){
        for (int j = 0; j < m-1; ++j){
            swap(a[i][j],a[j][i]);
        }
    }
    for (int )

    return 0;
}