class Solution {
public:
    void dfs(vector<vector<int>>& stones, int node,vector<bool>&visited){
        visited[node]=1;
        int n=stones.size();
        for(int i=0;i<n;i++){
            if(!(visited[i])&& (stones[i][0]==stones[node][0]|| stones[i][1]==stones[node][1])){
                dfs(stones,i,visited);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<bool>visited(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                cnt++;
                dfs(stones,i,visited);
            }
        }
        return n-cnt;
    }
};