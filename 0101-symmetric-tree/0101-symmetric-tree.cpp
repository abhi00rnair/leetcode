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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return 1;
        }
        return func(root->left,root->right);
    }
    
    bool func(TreeNode*left, TreeNode*right){
        if(!left && !right){
            return true;
        }
        if(!left || !right){
            return false;
        }
        if(left->val!=right->val){
            return false;
        }
        return func(left->left,right->right)&&func(left->right,right->left);
    }
};