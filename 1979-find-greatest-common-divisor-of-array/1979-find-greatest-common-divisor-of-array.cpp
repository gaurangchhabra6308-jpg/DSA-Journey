class Solution {
public:
      int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
      }

    int findGCD(vector<int>& nums) {
        int mini=nums[0];
        int maxi=nums[0];
        for(auto i:nums){
            mini= min(mini,i);
            maxi= max(maxi,i);
           
        }
        return gcd(mini,maxi);
    }
};