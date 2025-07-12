// // // #include<iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //      int n;
// // //     cin >> n;

// // //      int arr[n][n];

   
// // //       for (int i = 0; i < n; i++) {
// // //          for (int j = 0; j < n; j++) {
// // //              cin >> arr[i][j];
// // //          }
// // //      }

// // //      for (int i = 0;i<n;i++){
// // //         for(int j=0;j<n;j++){
// // //             cout<<arr[i][j]<< " ";}

// // //             cout<<endl;}
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;cin>>n;

// //     int arr[n][n];

// //     for (int i = 0;i<n;i++){
// //         for (int j = 1;j<n;j++){
// //             cout << "*"<< " ";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n][n];
//     char ch = 'A';
//     for (int i = 0;i<n;i++){
        
//         for (int j = 0;j<n;j++){
//             cout<<ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;

    int arr[n][n];

    int k = 1;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}