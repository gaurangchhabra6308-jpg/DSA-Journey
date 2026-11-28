class Solution {
public:
    long long int houserob(vector<int>& nums) {

        int prev=0,prev2=0,curr=0;
        for(int i:nums){
            curr=max(prev,prev2+i);
            prev2=prev;
            prev=curr;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
            return max(houserob(temp1),houserob(temp2));
        
    }
};