class Solution {
public:
    int jump(vector<int>& nums) {
        int start=0,far=0, jumps=0;
        while(far<nums.size()-1){
            int farthest=0;
            for(int i=start;i<=far;i++){
                farthest=max(farthest,nums[i]+i);
            }
            start=far+1;
            far=farthest;
            jumps++;
        }

        return jumps;
    }
};