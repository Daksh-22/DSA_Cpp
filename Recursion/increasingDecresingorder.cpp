#include<iostream>
using namespace std;
// void incDec(int n){
//     if (n==1){
//         cout<<1<<endl;
//         return;
//     }
//     cout<< n << endl;
//     incDec(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     incDec(n);
//     return 0;
// }


void inc(int n){
    if (n==0){
        cout << 1 << endl;
        return;
    }
     inc(n-1);
     cout << n <<" ";
}
int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}