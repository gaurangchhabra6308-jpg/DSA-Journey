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
    void flatten(TreeNode* root) {
       if(!root) return;
       vector<TreeNode*>nodes;
       Preorder(root,nodes);
       for(int i=0;i<nodes.size()-1;i++){
        nodes[i]->left=NULL;
        nodes[i]->right=nodes[i+1];
       } 
    }
    void Preorder(TreeNode* node,vector<TreeNode*>&nodes){
        if(node==NULL) return;
        nodes.push_back(node);
        Preorder(node->left,nodes);
        Preorder(node->right,nodes);
    }
};