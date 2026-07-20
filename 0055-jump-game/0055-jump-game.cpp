class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Reach = 0;
        for (int i = 0; i < nums.size();i++) {
            if (i > Reach) return false;
            Reach = max(Reach, i + nums[i]);
        }
        return true;
    }
};