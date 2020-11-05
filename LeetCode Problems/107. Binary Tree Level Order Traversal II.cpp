https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

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
    void bfsReverse(TreeNode* root, vector<vector<int>> &v){
        if(root==NULL) return;
        
        queue<TreeNode*> q;
        stack<TreeNode*> s;
        q.push(root);
        s.push(root);
        q.push(NULL);
        s.push(NULL);
        
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
            
            if(f->right){
                q.push(f->right);
                s.push(f->right);
            }
            if(f->left){
                q.push(f->left);
                s.push(f->left);
            }
            if(q.front()==NULL && q.size()==1) break;
            
            if(q.front()==NULL){
                q.push(NULL);
                s.push(NULL);
                q.pop();
            }
         }
        s.pop();
        vector<int> t;
        while(!s.empty()){
            TreeNode* f = s.top();
            if(f==NULL){
                v.push_back(t);
                t.clear();
                s.pop();
            }
            else{
                t.push_back(f->val);
                s.pop();
            }
        }
        v.push_back(t);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        bfsReverse(root,v);
        return v;
    }
};
