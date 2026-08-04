class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>set(nums.begin(),nums.end());
      int min= *min_element(nums.begin(),nums.end());
      int max= *max_element(nums.begin(),nums.end());
        vector<int>ans;
       for(int i=min;i<=max;i++){
        if(set.find(i)==NULL){
            ans.push_back(i);
        }
       }
       return ans;
    }
};