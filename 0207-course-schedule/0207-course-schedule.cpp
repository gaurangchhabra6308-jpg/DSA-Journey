class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<bool>&visited,vector<bool>&pathvisited,int idx){
        pathvisited[idx]=true;
        visited[idx]=true;
        for(int i: graph[idx]){
            if(!visited[i]){
                if(dfs(graph,visited,pathvisited,i))return true;
            }
            else if(pathvisited[i]){
                return true;
            }
        }
        pathvisited[idx]=false;
        return false;

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
         for(auto& p : prerequisites) {
            graph[p[1]].push_back(p[0]);
        }
        vector<bool> visited(numCourses, false);
        vector<bool> pathVisited(numCourses, false);
         for(int i = 0; i < numCourses; i++) {
            if(!visited[i]) {
                if(dfs(graph, visited, pathVisited, i)) return false;
            }
        }
        return true;

    }
};