#include<iostream>
using namespace std;

int nStairs(int n,int k){
    if (n == 0){
        return 1;
    }
    if (n < 0){
        return 0;
    }

    int ans = 0;
    for (int i = 1; i <= k; i++){
        ans += nStairs(n - i, k);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << nStairs(n, 5);  
    return 0;
}
