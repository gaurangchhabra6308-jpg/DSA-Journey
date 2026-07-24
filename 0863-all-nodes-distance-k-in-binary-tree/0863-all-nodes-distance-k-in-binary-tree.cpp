/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:   
     vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        vector<int>ans;
     unordered_map<TreeNode*, TreeNode*> parentMap;
        unordered_map<TreeNode*, bool> visited;
       
        queue<TreeNode*> q;
          q.push(root);
        while(!q.empty()) {
            TreeNode* current = q.front(); 
            q.pop();
            if(current->left) {
                parentMap[current->left] = current;
                q.push(current->left);
            }
            if(current->right) {
                parentMap[current->right] = current;
                q.push(current->right);
            }
        }
      
    
        q.push(target);
        visited[target] = true;
        int distance=0;
       while(!q.empty()){
         int n=q.size();
         if(distance==K) break;
         for(int i=0;i<n;i++){
            TreeNode* current=q.front();
            q.pop();
            if(current->left&& !visited[current->left]){
                q.push(current->left);
                visited[current->left]=true;
            }
            if(current->right && !visited[current->right]) {
                    q.push(current->right);
                    visited[current->right] = true;
                }
            if(parentMap[current] && !visited[parentMap[current]]) {
                    q.push(parentMap[current]);
                    visited[parentMap[current]] = true;
                }
         }
         distance++;
        
       }
       while(!q.empty()){
        TreeNode* current=q.front();
        q.pop();
           ans.push_back(current->val);
       }
    return ans;
      }
};