#include<iostream>
using namespace std;

int main(){

    int n;
    int max_len = 0;
    char largest[100];
    cin>>n;

    cin.get();

    
    char a[100];
    
    for(int i = 0;i<n;i++){
        cin.getline(a,100);
        int len_a = strlen(a);
        if (len_a>max_len){
            max_len=len_a;
            strcpy(largest,a);
        }


         
        
        cout  << largest <<  endl;
    }
    return 0;
}