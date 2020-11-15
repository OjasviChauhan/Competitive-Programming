// https://leetcode.com/problems/minimum-distance-between-bst-nodes/submissions/

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
    void travel(TreeNode* root,vector<int> &inorder){
        if(root == NULL) return;
        travel(root->left,inorder);
        inorder.push_back(root->val);
        travel(root->right,inorder);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> inorder;
        travel(root,inorder);
        int temp,ans = INT_MAX;
        for(int i = 1;i<inorder.size();i++){
            temp = inorder[i] - inorder[i-1];
            ans = min(ans,temp);
        }
        return ans;
    }
};
