#include<iostream>
using namespace std;
int tareeke(int n){
    if (n<=3){         //kyuki wall ka size is (4 x n);toh agr 3 se kam rkhte toh tiling possible with only 4 x 1 vali bricks 
        return 1;
    }
    return tareeke(n-1)+tareeke(n-4); 
}
int main()
{ int n;
  cin>>n;
  cout<<tareeke(n);
    
    return 0;
}