#include<iostream>
#include<vector>
using namespace std;

class minHeap{
    vector<int> v;
    void heapify(int i){
        int left = 2*i;
        int right = 2*i + 1;

        int minimum = i;

        if(v.size() > left && v[minimum]>v[left])  minimum = left;
        if(v.size() > right && v[minimum]>v[right])  minimum = right;

        if (minimum != i){
            swap(v[minimum],v[i]);
            heapify(minimum);
        }
    }
    public:
        minHeap(){
            v.push_back(-1);               //avoid using 0th index for fourmula simplification
                 }            
        void push(int data){      //O(log(N))
            v.push_back(data);
            int ch = v.size()-1;
            int pt = ch/2;

            while(pt > 0 && v[pt] > v[ch]){
                swap(v[pt],v[ch]);
                ch = pt;
                pt = pt/2;
            }
        }
        void pop(){
            swap(v[0],v[v.size()-1]);   //root and last node swap krdiya
            v.pop_back();
            heapify(1);
        }
        int top(){
            return v[0];
        }
        int size(){
            return v.size();
        }
        bool empty(){
            return v.empty();
        }

};

int main()
{
    
    return 0;
}