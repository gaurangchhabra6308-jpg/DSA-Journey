/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
     if(root==NULL) return 0;
     long long ans=0;long long  last,first;
     queue<pair<TreeNode*,long long>>q;
     q.push({root,0});
    
while (!q.empty()) {
    int size = q.size();
     long long  mini=q.front().second;

    for (int i = 0; i < size; i++) {
        long long curr_index=q.front().second-mini;
        TreeNode* node = q.front().first;
        q.pop(); 
          if (i == 0)
        first = curr_index;

    if (i == size - 1)
        last = curr_index;
       if(node -> left != NULL) 
            q.push({node -> left, 2LL * curr_index+1});
                
        if(node -> right != NULL) 
            q.push({node -> right, 2LL * curr_index + 2});
        
    }
    ans= max(ans,last-first+1);
}
return ans;
    }
};