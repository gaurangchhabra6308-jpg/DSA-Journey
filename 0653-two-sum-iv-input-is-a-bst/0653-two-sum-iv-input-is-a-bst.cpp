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
      class BSTIterator {
    stack<TreeNode*> st;

    void pushLeft(TreeNode* node){
       while(node){
        st.push(node);
        node=node->left;
       }
    }

public:
    BSTIterator(TreeNode* root){
        pushLeft(root);
    }

    int next(){
            TreeNode* node = st.top();
    st.pop();

    if(node->right)
        pushLeft(node->right);

    return node->val;

    }
};
    class BSTReverseIterator {
    stack<TreeNode*> st;

    void pushRight(TreeNode* node){
        while (node) {
    st.push(node);
    node = node->right;
}
    }

public:
    BSTReverseIterator(TreeNode* root){
        pushRight(root);
    }

    int next(){
       
    TreeNode* node = st.top();
    st.pop();

    if(node->left)
        pushRight(node->left);

    return node->val;

    }
};
    bool findTarget(TreeNode* root, int k) {
     BSTIterator leftIt(root);
     BSTReverseIterator rightIt(root);
    int left = leftIt.next();
    int right = rightIt.next();
    while(left < right){

    if(left + right == k)
        return true;

    else if(left + right < k)
        left = leftIt.next();

    else
        right = rightIt.next();
}
return false;
    }
};