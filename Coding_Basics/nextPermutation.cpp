#include<iostream>
#include <cstring>
#include<algorithm>
using namespace std;

int findIndex(char a[]) {
     int k = -1;
     int len_a = strlen(a);

    for(int i = len_a-2; i>=0; --i) {
        if ( a[i] < a[i+1] ) {
            k = i;
            break;
        }
    }
    
    return k;
} 
int main()
{
    char a[100];

    cin>>a;
    
    int k = findIndex(a);
    cout << k << endl;

    if (k==-1) {     
        reverse( a, a+strlen(a) );
        cout << a << endl;
    }
    else {
        int j = strlen(a) - 1;
        char x;
        while(j>k) {
            if (a[j] > a[k]){
                swap(a[j],a[k]);
                break;
            }
            j--;
        }
        reverse(a + k + 1, a + strlen(a));

        cout << a << endl;
    }

   
    
    return 0;
}