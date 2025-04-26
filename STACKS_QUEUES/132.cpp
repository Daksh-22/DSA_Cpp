#include<iostream>
#include<vector>
#include<stack>
#include<climits>

using namespace std;

bool pattern(vector<int>& arr){
     int n = arr.size();
    stack<int> st;
    int third = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
      
        if (arr[i] < third) {
            return true;
        }
        while (!st.empty() && st.top() < arr[i]) {
            third = st.top(); // this could be the '2' in 132
            st.pop();
        }
        st.push(arr[i]); // potential '3' in 132
    }

    return false;
}

int main()
{   int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements:";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

      if (pattern(arr)) {
        cout << "132 pattern found" << endl;
    } else {
        cout << "No 132 pattern" << endl;
    }

    return 0;
}
