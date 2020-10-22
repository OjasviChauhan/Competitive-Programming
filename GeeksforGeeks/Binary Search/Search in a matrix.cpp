class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i=0,j=M-1;
	    while(i<=N-1 && j>=0){
	        if(X == mat[i][j]) return 1;
	        else if(X > mat[i][j]) i++;
	        else j--;
	    }
	    return 0;
	}
};
