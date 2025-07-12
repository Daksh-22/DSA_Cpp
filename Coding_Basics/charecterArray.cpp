#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


// void inputString(char a[], int n, char d = '\n') {
//     char ch;int i = 0;
//     ch = cin.get();

//     while(ch != d and i < n-1){

//         a[i++] = ch;
//         ch = cin.get()
//     }
//     a[i] = '\0';

// }
// int main() {
//     char a[100];

//     inputString(a, 100,'.');
//     cout<<"Array: "<<a<<endl;

//     char ch;
// }

int main() {
    char str[100]; //charecter array declaration
    cout <<"Enter String:";
    cin.getline(str,100); // string name--string size--delimiter
    string strr = "DAKSH";
    cout << "Output:" << str << endl;
    cout << "string length"<<strlen(str) << endl;
     
    reverse(strr.begin(),strr.end());
    cout << "Reversed String is-" << strr;
    


}