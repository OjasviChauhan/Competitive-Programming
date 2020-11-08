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
private:
    vector<int> v;
public:
    void printKlevel(TreeNode* root, int k){
        if(!root or k<0){
            return;
        }
        if(k==0){
            v.push_back(root->val);
        }
        printKlevel(root->left, k-1);
        printKlevel(root->right, k-1);
    }
    
    // Prints all nodes at distance k from a given target node. 
    // The k distant nodes may be upward or downward. This function 
    // returns distance of root from target node, it returns -1 if  
    // target node is not present in tree rooted with root.
    int solve(TreeNode* root, TreeNode* target, int k){
        if(!root){
            return -1;
        }
        if(root == target){
            printKlevel(root,k);
            return 0;
        }
        
        // For left subtree
        int dl = solve(root->left, target, k);
        if(dl != -1){
            // if root is itself at k distance from target
            if(dl+1 == k)  
                v.push_back(root->val);
            
            // Else go to right subtree and print all k-dl-2 distant nodes
            else        
                printKlevel(root->right, k-dl-2);
            
            return 1 + dl;
        }
        
        // For Mirror tree in right
        int dr = solve(root->right, target, k);
        if(dr != -1){
            if(dr+1 == k)
                v.push_back(root->val);
            else
                printKlevel(root->left, k-dr-2);
            
            return 1 + dr;
        }
        
        // if target is neither present in left subtree nor in right subtree.
        return -1;
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        solve(root,target,k);
        return v;
    }
};
