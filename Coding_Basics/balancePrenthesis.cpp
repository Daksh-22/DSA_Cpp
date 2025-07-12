#include<iostream>
using namespace std;

void balancedPar(char* a,int i,int open,int close,int N){

//BASE CASE

if (i==2*N){
    a[i]='\0';
    cout<<a<<endl;
    return;
}

//RECURSIVE CASE
if (open<N) {
    a[i] = '(';
    balancedPar(a,i+1,open+1,close,N);
}
if (close<open){
    a[i]=')';
    balancedPar(a,i+1,open,close+1,N);
}
    
}

int main()
{
    int n  =2;
    char a[100];
    balancedPar(a,0,0,0,n);
    return 0;
}