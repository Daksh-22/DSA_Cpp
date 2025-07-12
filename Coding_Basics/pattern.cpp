#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++) {
    //     // Print leading spaces
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << "*";
    //     }
    //     // Print stars
    //     for (int j = 0; j < n - i; j++) {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
 
    // for(int i = 0;i<n;i++){
    //        char ch = 'A';
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch++;
    //     }
    //     cout << endl;
    // }
    for(int i = 0;i<n;i++){
        for(int j = i+1; j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
