class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sumofsquares=0;
        for(int i=0;i<n;i++){
           if(n%(i+1)==0){
            sumofsquares+= nums[i]*nums[i];
           }
        }
        return sumofsquares;
    }
};