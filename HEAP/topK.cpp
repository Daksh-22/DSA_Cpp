#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void printH(priority_queue<int, vector<int>, greater<int>> minHeap){
    while(!minHeap.empty()){
        cout << minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;
}

int main()
{   
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    int k;
    cout<<"Enter K:-";
    cin>>k;
    cout<<endl;

    for(int i = 0;i<k;i++){
        int data;
        cin>>data;
        minHeap.push(data);
    }
    while(true){
    int data;
    cin>>data;
    
    if (data == -1){
        printH(minHeap);
    }
    else{
        if(data > minHeap.top()){
            minHeap.pop();
            minHeap.push(data);
        }
    }
    }

    return 0;
}