class Solution {
public:
    bool dfs(int node, int c, int color[],vector<vector<int>>& graph){
        color[node]=c;
        for(int it:graph[node]){
            if(color[it]==-1){
                if(!dfs(it,1-c,color,graph)) return false;
            }
            else if(color[it]==color[node]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int color[n];
        for(int i=0;i<n;i++){
            color[i]=-1;
        }
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(dfs(i,0,color,graph)==false){
                    return false;
                }
            }
          
        }
      return true;
    }
};