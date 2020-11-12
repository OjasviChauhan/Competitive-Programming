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
    void inorder(TreeNode* root,vector<int>& v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2,v3;
        inorder(root1,v1);
        inorder(root2,v2);
        int n1 = v1.size();
        int n2 = v2.size();
        
        int i=0,j=0;
        while(i<n1 and j<n2){
            if(v1[i] < v2[j]){
                v3.push_back(v1[i++]);
            }
            else{
                v3.push_back(v2[j++]);
            }
        }
        while(i<n1){
            v3.push_back(v1[i++]);
        }
        while(j<n2){
            v3.push_back(v2[j++]);
        } 
        return v3;
    }
};
