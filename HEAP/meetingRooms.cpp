#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int minRooms(vector<vector<int>> intervals){
    int n = intervals.size() ;
    if(n == 0){
        return 0;
    }
    sort(intervals.begin(),intervals.end());

    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i = 0; i<n; i++){
        if (!minHeap.empty() && intervals[i][0] >= minHeap.top()){
            minHeap.pop();
        }
        minHeap.push(intervals[i][1]);
    }
    return minHeap.size();
}

int main()
{   int n;
    cout<<"Enter the number of meetings-"<<endl;
    cin>>n;

    vector<vector<int>> intervals;
    cout<<"Enter intervals:"<<endl;
    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        intervals.push_back({start,end});
    }

    int rooms = minRooms(intervals);

    cout << "Minimum meeting rooms required is:-"<<rooms<<endl;
    
    return 0;
}