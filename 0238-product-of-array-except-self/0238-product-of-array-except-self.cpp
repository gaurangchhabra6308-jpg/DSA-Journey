class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size());
        int presum=1;
        for( int i=0;i<nums.size();i++){
            res[i]=presum;
            presum *= nums[i];
        }
        int suffsum=1;
        for(int i=nums.size()-1;i>=0;i--){
            res[i]*=suffsum;
            suffsum*=nums[i];
            
        }
        
        return res;
    }
};