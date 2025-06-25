#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class students{
    public:
        int age;
        string name;
        int marks;

        students(int a,string s,int m){
            age = a;
            name = s;
            marks = m;
        }

        void printPQ() const {
            cout<<"Name-"<<name<<endl;
            cout<<"Age-"<<age<<endl;
            cout<<"Marks-"<<marks<<endl<<endl;
        }
};

class compare{
    public:
        bool operator() (const students &a, const students &b){
            return a.name>b.name;
        }
};
int main()
{   
    priority_queue<students, vector<students>, compare> PQ;

    PQ.push(students(20,"DAKSH",100));
    PQ.push(students(22, "Bob", 90));
    PQ.push(students(19, "Charlie", 78));

    while(!PQ.empty()){
        PQ.top().printPQ();
        PQ.pop();
    }
    cout<<endl;

    // priority_queue<int> m;      //MAXHEAP by default

    // m.push(1);
    // m.push(2);
    // m.push(3);
    // m.push(4);    
    // m.push(5);
    // m.push(6);
    // m.push(7);

    // cout<< m.size()<<endl;

    // while(!m.empty()){
    //     cout<<m.top()<<" ";
    //     m.pop();
    // }
    // cout<<endl;

    // cout<<m.size();


    // priority_queue<int, vector<int>, greater<int>> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);    
    // q.push(5);
    // q.push(6);
    // q.push(7);

    // cout<<q.size()<<endl;

    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    // cout<<endl;



    return 0;
}