class Solution {
public:
    void findcombination(int i,vector<int>&candidates,int target,vector < vector < int >> & ans, vector < int > & ds){
      if(target==0){
        ans.push_back(ds);
        return;
      }
      if(i==candidates.size()){
        return;
      }
      if(candidates[i]<=target){
        ds.push_back(candidates[i]);
        findcombination(i+1,candidates,target-candidates[i],ans,ds);
        ds.pop_back();
      }
      while(i+1<candidates.size()&& candidates[i]==candidates[i+1]){
        i++;
      }
      findcombination(i+1,candidates,target,ans,ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
         vector<int>ds;
         sort(candidates.begin(),candidates.end());
         findcombination(0,candidates,target,ans,ds);
         return ans;
    }
};