#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{   int n;
    cout<<"Enter number of ropes";
    cin>>n;

    vector<int> input(n);
    cout<<"Enter ropes:-";
    
    for (int i = 0;i<input.size(); i++){
        cin>>input[i];
    }

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i = 0;i<input.size();i++){
        minHeap.push(input[i]);
    }

    int minCost = 0;

    while(minHeap.size() > 1){
        int first = minHeap.top();
        minHeap.pop();

        int second = minHeap.top();
        minHeap.pop();

        int merged = first+second;

        minCost += merged;

        minHeap.push(merged);
    }

    cout<<"Min cost is="<<minCost<<endl;
    
    return 0;
}