
// #include<iostream>
// using namespace std;

// int sum(int n){

//     if (n==0 || n==1) {
//         return n;
//             }
//      return (n + sum(n-1));
  
// } 
// //*************************************************

// int fib (int n)  {
//     if (n==0 || n==1) {
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }
// int main () {
//     int n;
//     cin >>n;

//     cout << (fib(n)) << endl; 

//     return 0;
// }
// //**************************************************** 
// int sumOfArray(int *a, int n)  {
    
//      if (n==0) {
//         return 0;
//      }

//      return a[0] + sumOfArray[a+1,n-1];
     
// }
// int main() {
//     int n;
//     cin >> n;
//     int a[]={1,2,3,4};
    
//     cout << sumOfArray(a,n);

//     return 0; 
// } 
//********************************************************** */
#include<iostream>
using namespace std;
void printDec(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    printDec(n-1);
}
int main()
{ int m;
cout<<"enter the number-";
cin>>m;
cout << "Decreasing order is: ";
printDec(m);  

cout << endl;


    
    return 0;
}