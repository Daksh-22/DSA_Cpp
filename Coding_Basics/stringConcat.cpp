#include<iostream>
#include <cstring>
using namespace std;

void concat(char a[], char b[])
{
   

    int i = strlen(a);
    int j = 0;
    
    while(j<=strlen(b)){
        a[i] = b[j];
        i++;
        j++;
    } 

}
int main(){

    char a[100] = "Daksh";
    char b[] = "Jain";

    concat(a,b);
    cout<<a<<endl;


    strcat(a,b);
    cout << a <<endl;  //in built function with *cstring*

}