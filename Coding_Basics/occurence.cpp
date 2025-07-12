#include<iostream>
using namespace std;
int firstOccurence(int* a , int n, int key){
    if (n==0){
        return -1;
    }
    if (a[0]==key){
        return 0;
    }
    int i = firstOccurence(a+1,n-1,key);

    if (i==-1){
        return -1;
    } 
    return i+1;
}

int lastOccurence(int* a,int n,int key){
    if (n==0){
        return -1;
    }
    if(a[n-1]==key){
        return n-1;
    }
    return lastOccurence(a,n-1,key);
}
int allIndexes(int* a,int n,int i,int key){
    if(i==n){
        return;}
    if(a[i]==key){
        cout<< i << " "; 
    }
    return allIndexes(a+1,n,i+1,key); 
    
}
int main()
{
    
    return 0;
}