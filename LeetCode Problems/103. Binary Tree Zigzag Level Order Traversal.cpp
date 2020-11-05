https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
    void zigZag(TreeNode* root, vector<vector<int>> &v){
        if(root==NULL){
            return;
        }
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        
        while(!s1.empty() || !s2.empty()){
            vector<int> t;
            while(!s1.empty()){
                TreeNode* f = s1.top();
                if(f->left) s2.push(f->left);
                if(f->right) s2.push(f->right);
                s1.pop();
                t.push_back(f->val);
            }
            v.push_back(t);
            t.clear();
            
            while(!s2.empty()){
                TreeNode* f = s2.top();
                if(f->right) s1.push(f->right);
                if(f->left) s1.push(f->left);
                s2.pop();
                t.push_back(f->val);
            }
            if(!t.empty()) v.push_back(t);
        }
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        zigZag(root,v);
        return v;
    }
};
