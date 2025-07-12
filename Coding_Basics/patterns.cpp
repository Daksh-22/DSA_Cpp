// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     int arr[n][n];

   
// //     for (int i = 0; i < n; i++) {
// //         for (int j = 0; j < n; j++) {
// //             cin >> arr[i][j];
// //         }
// //     }

    
// //     for (int i = 0; i < n; i++) {
// //         if (i % 2 == 0) {  
// //             // Print normally for even 
// //             for (int j = 0; j < n; j++) {
// //                 cout << arr[i][j] << " ";
// //             }
// //         } else {  
// //             // Print  reverse for odd rows
// //             for (int j = n - 1; j >= 0; j--) {
// //                 cout << arr[i][j] << " ";
// //             }
// //         }
// //         cout << endl;  
// //     }

// //     return 0;
// // }
// ////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n][n];


//     for (int i = 1;i<=n;i++){
//         for (int j = 0;j < i; j++){
//             cout << "*"<< " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/////////////////////////////////////////////
//  #include<iostream>
//  using namespace std;
 
//  int main()
//  {
//      int n;
//      cin>>n;

//      int k = 1;

//      for(int i = 0;i<n;i++){
//         for(int j = 0;j<i+1;j++){
//             cout<<k++<<" ";
//         }
//         for(int j = 0; j<n-1-i; j++){
//             cout<< " ";
//         }
//         cout<<endl;
//      }
//      return 0;
//  }
 

//  #include<iostream>
//  using namespace std;
 
//  int main()
//  {
//      int n;
//      cin>>n;

//      int arr[n][n];

//      for (int i = 0;i<n;i++){
//         for (int j = 0;j<n-i-1;j++){
//             cout<<" "<<" ";
//         }
//         for (int j = i+1; j>=1;j--){
//             cout<< j << " ";
//         }
//         cout<<endl;
//      }
//      return 0;
//  }
////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main()
// {   
//     int n;
//     cin>>n;

//     for (int i = 0;i<n;i++){
//         for(int j = 0;j<n-1-i;j++){
//              cout<<" ";
//         }
//         if(i==0 || i==n-1){
//             for(int j = 0;j<n;j++){
//                 cout<<"*"<<" ";
//             }
//         }
//         else{
//             cout<<"*"<<" ";
//             for(int j = 0;j<n-2;j++){
//                 cout<<"  ";
//             }
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//         }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n ;
//     cin>>n;

//     for (int i = 0;i<n;i++){
//         if(i>0 && i<=(n-1)/2){
//             cout<<"*"<<" ";
//             for(int j = 0;j<(n+1)/2 -2;j++){
//                 cout<<" ";
//             }

//         }
    
    
    
    
//     }
//     return 0;
// }