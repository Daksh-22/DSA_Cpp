#include<iostream>
using namespace std;

void generateStrings(char* in, char* op,int i,int j){
    if(in[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }

    int fd = in[i] - '0';
    char ch = 'A'+fd-1;
    op[j] = ch;
    generateStrings(in,op,i+1,j+1);

    if(in[i+1]!='\0'){
        int sd = in[i+1]-'0';
        int no = 10*fd +sd;
        if(no<=26){
            char ch = 'A' + no - 1;
            op[j] = ch;
            generateStrings(in,op,i+1,j+1);

        }
    }
}

int main()
{   
    char ip[100];
    char op[100];

    cin>>ip;

    generateStrings(ip,op,0,0);
    
    return 0;
}