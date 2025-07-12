#include<iostream>
using namespace std;

void palindrome(string s,vector<string>& op){
    
 //BASE CASE
 if (s.size()==0){
    for (int i =0;i<op.size();i++){
        cout << op[i] << ",";
        cout<<endl;
        return;
    }
    //RECURSIVE CASE
    for (int i = 1;i<=s.size();i++){
        string yhumkrteh = s.sbstr(0,i);
        string ykaamrecursionwilldo = s.sbstr(i);

        if (isPalindrome())
    }
 }
    


}
int main()
{
    
    return 0;
}