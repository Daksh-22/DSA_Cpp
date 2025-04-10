#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if (n==1||n==0){
        return true;
    }
    return arr[n-1]>arr[n-2] && isSorted(arr,n-1);
}
int main()
{   int arr[10] = {1,2,3,4,5,6} ;
    cout << isSorted(arr,6);
    return 0;
}