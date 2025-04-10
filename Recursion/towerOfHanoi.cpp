#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src,char helper,char dest){
    if (n==1){
        cout<<"move disk 1 from "<<src<<" to "<<dest<<endl;
        return;
    }
    towerOfHanoi(n-1,src,dest,helper);
    cout<<"move disk"<<n<<" from"<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,src,dest);
}
int main()
{   int n;
    cin>>n;
    towerOfHanoi(n,'a','b','c');
    
    return 0;
}