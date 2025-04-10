#include<iostream>
using namespace std;
void allOccurences(int* a,int i,int key,int n){
    if(i==n){
       return;
    }
    if (a[i]== key){
        cout << i << " ";
    }
    allOccurences(a,i+1,key,n);
}

int lastOccurence(int* arr, int n,int key){
    if (n==0){
        return -1;
    }
    if(arr[n-1] == key){
        return n-1;
    }
    return lastOccurence(arr,n-1,key);
}

int firstOccurence(int* arr,int i,int key,int n){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOccurence(arr,i+1,key,n);
}
int main()
{
    int arr[10] = {1,2,3,7,7,7,7,5,7,10};
    cout<<firstOccurence(arr,0,7,10);
    return 0;
}
