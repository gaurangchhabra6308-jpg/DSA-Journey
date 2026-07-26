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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       unordered_map<int,int>inMap;
         for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        return build(inorder,0,inorder.size()-1,inMap,postorder,0,postorder.size()-1);
    }
    TreeNode* build(vector<int>& inorder,int instart, int inEnd,unordered_map<int,int>&inMap,vector<int>& postorder,int poststart,int postEnd){
        if(poststart>postEnd|| instart>inEnd) return NULL;
       TreeNode* root= new TreeNode(postorder[postEnd]);
       int inroot=inMap[root->val];
       int leftsize=inroot-instart;
       root->left= build(inorder,instart,inroot-1,inMap,postorder,poststart,poststart+leftsize-1);
       root->right=build(inorder,inroot+1,inEnd,inMap,postorder,poststart+leftsize,postEnd-1);
       return root;
    }

};