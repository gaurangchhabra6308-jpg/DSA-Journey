class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            ans= max(ans,nums[n-i-1]+nums[i]);
        }
        return ans;
    }
};