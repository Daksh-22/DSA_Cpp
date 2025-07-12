#include<iostream>
using namespace std;

void towerOfHanoi(int n, string src, string helper, string dest ){
    if(n==1){
        cout << "Move disk from"<<src<<"to"<<dest<<endl;
        return;
    }
    towerOfHanoi(n-1,src,dest,helper);
    cout<<"Move disk"<<n<<"from"<<src<<"to"<<dest;

    towerOfHanoi(n-1,helper,src,dest);
}

int main()
{
     int n;
    cout << "Enter number of disks: ";
    cin >> n;
    if (n <= 0) {  
        cout << "Invalid number of disks! Must be greater than 0." << endl;
        return 1;  
    }
    towerOfHanoi(n, "A", "B", "C");
    
    return 0;
}