class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        
        int N = matrix.size();
        int M = matrix[0].size();
        
        int i=0,j=M-1;
	    while(i<=N-1 && j>=0){
	        if(target == matrix[i][j]) return true;
	        else if(target > matrix[i][j]) i++;
	        else j--;
	    }
	    return false;
    }
};
