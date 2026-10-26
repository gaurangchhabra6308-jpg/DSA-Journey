class Solution {
public:
    long long dfs(vector<vector<int>>& grid, int i, int j, int k){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0|| i>=n||j<0||j>=m|| grid[i][j]==0) return 0;
        long long s=grid[i][j];
        grid[i][j]=0;
        s+=dfs(grid,i+1,j,k);
        s+=dfs(grid,i-1,j,k);
        s+=dfs(grid,i,j+1,k);
        s+=dfs(grid,i,j-1,k);
        return s;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>0){
                   long long sum=dfs(grid,i,j,k);
                    if(sum%k==0) ans++;
                }
            }
        }
        return ans;

    }
};