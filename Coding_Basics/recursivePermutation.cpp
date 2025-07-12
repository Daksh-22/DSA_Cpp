#include<iostream>
#include<vector>
using namespace std;

void perm(vector<int>& nums, int index, vector<vector<int>>&ans ){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for (int i = 0;i<nums.size();i++){
        swap(nums[index],nums[i]);
        perm(nums,index+1,ans);
        swap(nums[index],nums[i]);     //backtracking
    }
}


int main()
{
    
    return 0;
}