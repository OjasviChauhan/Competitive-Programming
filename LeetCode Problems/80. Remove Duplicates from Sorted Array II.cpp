// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        if(v.size()==0){
            return 0;
        }
        int count = 1;
        vector<int>::iterator itr;
        itr = v.begin()+1;
        
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                count--;
            }
            else{
                count = 1;
            }
            if(count < 0){
                v.erase(itr);
                count++;
                i--;
                itr--;
            }
            itr++;
        }
        return v.size();
    }
};
