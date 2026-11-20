class Solution {
public:
    void noOfSubset(vector<int>& nums,int idx,vector<vector<int>> &res,vector<int>&subset){
        if(idx==nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        noOfSubset(nums,idx+1,res,subset);
        subset.pop_back();
        noOfSubset(nums,idx+1,res,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       
        vector<vector<int>>res;
        vector<int>subset;
        noOfSubset(nums,0,res,subset);
        return res;
    }
};