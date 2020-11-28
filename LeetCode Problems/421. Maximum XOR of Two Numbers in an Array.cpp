class node{
  public:
    node* left;  // for 0
    node* right; // for 1
};

class trie{
  node* root;
  public:  
    trie(){
        root = new node();
    }

    void insert(int n){
        node* temp = root;
        for(int i=31;i>=0;i--){
            int bit = (n>>i)&1;
            if(bit==0){
                if(temp->left==NULL){
                    temp->left = new node();
                }
                temp = temp->left;
            }
            else{
                //bit is 1
                if(temp->right==NULL){
                    temp->right = new node();
                }
                temp = temp->right;
            }
        }
    }

    int max_xor_helper(int value){
        int current_ans = 0;
        node* temp = root;

        for(int i=31;i>=0;i--){
            int bit = (value>>i)&1; // extracting the most significant bit
            if(bit==0){
                // find the complimentry value
                if(temp->right!=NULL){
                    temp = temp->right;
                    current_ans += (1<<i);
                }
                else{
                    temp = temp->left;
                }
            }
            else{
                // bit of new value is 1
                if(temp->left!=NULL){
                    temp = temp->left;
                    current_ans += (1<<i);  
                }
                else{
                    temp = temp->right;
                }
            }
        }
        return current_ans;
    }
};

class Solution {
public:
    trie t;
    int max_xor=0;
    int findMaximumXOR(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            t.insert(nums[i]);
            int current_xor = t.max_xor_helper(nums[i]);
            max_xor = max(current_xor,max_xor);
        }
        return max_xor;
    }
};
