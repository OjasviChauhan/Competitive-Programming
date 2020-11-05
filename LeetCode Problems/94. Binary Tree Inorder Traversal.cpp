// https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    void printIn(TreeNode* root, vector<int> &v){
        if(root==NULL){
            return;
        }
        printIn(root->left,v);
        v.push_back(root->val);
        printIn(root->right,v);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        printIn(root,v);
        return v;
    }
};
