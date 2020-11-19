class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        if(nums.size()==1 and nums[0]==val) return 0;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            if(nums[i]==val and nums[j]!=val){
                swap(nums[i],nums[j]);
                i++; j--;
            }
            else if(nums[i]!=val and nums[j]==val){
                i++; j--;
            }
            else if(nums[i]==val and nums[j]==val){
                j--;
            }
            else{
                i++;
            }
        }
        return i;
    }
};
