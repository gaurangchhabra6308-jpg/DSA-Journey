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
     int sum=INT_MIN;
    int maxPathSum(TreeNode* root) {
        help(root);
        return sum;
    }
    int help(TreeNode* node){
        if(node==nullptr) return 0;
        int left=max(help(node->left),0);
        int right=max(help(node->right),0);
        sum=max(sum,node->val+left+right);
        return node->val +max(left,right);
    }
};