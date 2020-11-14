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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        
        // If either n1 or n2 matches with root's key, report
        // the presence by returning root
        if(root->val==p->val or root->val==q->val) return root;
        
        // Look for keys in left and right subtrees
        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
        
        // If both of the above calls return Non-NULL, then one key
        // is present in one subtree and other is present in other,
        // So this node is the LCA
        if(leftAns!=NULL and rightAns!=NULL) return root;
        
        // Otherwise check if left subtree or right subtree is LCA
        if(leftAns!=NULL) return leftAns;
        return rightAns;
    }
};
