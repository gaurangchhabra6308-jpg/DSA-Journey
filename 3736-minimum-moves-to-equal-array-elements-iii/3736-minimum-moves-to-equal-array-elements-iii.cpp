class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
        int max= *max_element(nums.begin(),nums.end());
        cnt+=max-nums[i];
        }
        return cnt;
    }
};