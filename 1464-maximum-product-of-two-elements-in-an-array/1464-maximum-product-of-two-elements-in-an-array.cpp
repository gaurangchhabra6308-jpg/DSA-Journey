class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int max1=INT_MIN,max2=INT_MIN;
    for(auto i:nums){
        if(max1<=i){
            max2=max1;
            max1=i;
        }
       else if(max2<=i){
            max2=i;
        }
    }
    return (max1-1)*(max2-1);
    }
};