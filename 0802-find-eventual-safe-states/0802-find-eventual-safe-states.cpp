class Solution {
public:
   bool dfs(int node,vector<vector<int>>& graph,vector<int>&vis,vector<int>&path){
    vis[node]=1;
    for(auto &it: graph[node]){
        if(!vis[it]){
            if(dfs(it,graph,vis,path)==false) return false;
        }
        else if(!path[it]) return false;
    }
    path[node]=1;
    return true;
   }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,0);
        vector<int>path(n,0);
        for(int i=0;i<n;i++){
            if(!graph[i].size()){
                vis[i]=1;
                path[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]) {
                dfs(i,graph,vis,path);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(path[i])ans.push_back(i);
        }
        return ans;
    }
};