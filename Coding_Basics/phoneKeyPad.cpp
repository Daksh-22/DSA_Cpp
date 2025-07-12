#include<iostream>
using namespace std;
char keys[][10]= {
    "","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};
void phoneKeyPad( char* ip, int i,char* op, int j){
    //base case
    if (ip[i] =='\0' ){
        op[j] = '\0';
        cout<< op << endl;
        return;
    }
    //RECURSIVE CASE
    int digit = ip[i] - '0';
    for (int k = 0;keys[digit][k] != '\0'; ++k){
        op[j] = keys[digit][k];
        phoneKeyPad(ip,i+1,op,j+1);
    }
}
int main()
{
    char op[100];
    char ip[] = "23";

    phoneKeyPad(ip,0,op,0);
     
    
    return 0;
}