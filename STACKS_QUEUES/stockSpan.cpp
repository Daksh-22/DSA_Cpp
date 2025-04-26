#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{   int n;
    cout << "Number of Days:";   //NUMBER OF ENTRIES
    cin>>n;

    vector<int> stocks(n);      //INPUT ARRAY
    vector<int> ans(n);         //OUTPUT ARRAY
    
    stack<int> s;               //STORING INPUT VALUES

    cout<<"give input:";
    for(int i=0;i<n;i++){
        cin>>stocks[i];
    }

    for (int i = 0;i<stocks.size();i++){
         while (!s.empty() && stocks[s.top()] <= stocks[i]){      //AGAR STACK ISNT EMPTY AND HUAMRA CURRENT ELEMENT S.TOP() SE BADA 
            s.pop();                                              //HAI TOH TOP ELEMENT POP KRDO
        }
        if (s.size() == 0){
            ans[i] = i+1;}                      //AGR POP KRTE KRTE STACK EMPTY HI HO HO GYA TOH MTLB USSE BADI PREV VALUE EXIST NHI KRTI
        else{               
            ans[i] = i - s.top();               //SPAN VALUE IS "CURRENT INDEX - PREVIOUS HIGH INDEX"
        }
        s.push(i);                              //i_th PUSH KRO STACK ME FOR FUTURE COMAPRISONS
    }
    cout << "Stock span values:\n";
    for (int span : ans) {
        cout << span << " ";                   //PRINTING THE OUTPUT
    }
    cout << endl;

    
    return 0;
}