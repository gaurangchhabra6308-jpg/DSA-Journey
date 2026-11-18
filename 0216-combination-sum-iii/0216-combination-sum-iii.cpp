class Solution {
public:
    void combination(int idx,int target,vector<vector<int>> &ans,vector<int> &ds,int k){
          if(target==0){
            if(ds.size()==k)ans.push_back(ds);
            return;
          }
          for(int i=idx;i<=9;i++){
            if(i>target)break;
            ds.push_back(i);
            combination(i+1,target-i,ans,ds,k);
            ds.pop_back();
          }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        combination(1,n,ans,ds,k);
        return ans;
    }
};