#include<iostream>
using namespace std;

int Nstairs(int n,int k)
    {
        if(n==0){
            return 1;
        }
        if (n<0){
            return 0;
        }
        int ans = 0;
        for (int i = 1;i<=k;i++){
            ans +=  Nstairs(n-i,k);
        }
        return ans; 
        
        
    }
    


int main()
{
    int n = 6;
    int k = 4;
    cout<< Nstairs(n,k);
    return 0;
}