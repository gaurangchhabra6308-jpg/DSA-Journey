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

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>inMap;
         for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);
    }
     TreeNode* build(vector<int>& preorder,int prestart,int preEnd,vector<int>& inorder,int instart, int inEnd,unordered_map<int,int>&inMap){
       if(prestart>preEnd|| instart>inEnd) return NULL;
       TreeNode* root= new TreeNode(preorder[prestart]);
       int inroot=inMap[root->val];
       int leftsize=inroot-instart;
       root->left= build(preorder,prestart+1,prestart+leftsize,inorder,instart,inroot-1,inMap);
       root->right= build(preorder,prestart+leftsize+1,preEnd,inorder,inroot+1,inEnd,inMap);
       return root;
    }
};