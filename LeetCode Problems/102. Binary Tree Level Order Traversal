https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    void printLevelOrder(TreeNode* root, vector<vector<int>> &v){
        if(root==NULL){
            return;
        }
        vector<int> t;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode* n = q.front();
            t.push_back(n->val);
            q.pop();
            
            if(q.front()==NULL){
                v.push_back(t);
                t.clear();
            }
            
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
            
            if(q.front()==NULL){
                q.push(NULL);
                q.pop();
            }
            if(q.front()==NULL && q.size()==1) break;
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        printLevelOrder(root,v);
        return v;
    }
};
