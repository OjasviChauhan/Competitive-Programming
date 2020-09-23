class Solution {
public:
    bool isSafe(int board[][10],int i,int j,int n){
        for(int row=0;row<i;row++){
            if(board[row][j]==1){
                return false;
            }
        }

        int x = i;
        int y = j;

        while(x>=0 && y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }

        x = i;
        y = j;

        while(x>=0 && y<=n){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y++;
        }

        return true;
    }

    bool solve(int board[][10],int i,int n,vector<vector<string>> &v){
        if(i == n){ 
            vector<string> S;
            for(int i=0;i<n;i++){
                string s="";
                for(int j=0;j<n;j++){
                    if(board[i][j] == 1){
                       s += "Q"; 
                    }
                    else
                        s += ".";
                }
                S.push_back(s);
            }
            v.push_back(S);
            
            return false;
        }

        for(int j=0;j<n;j++){
            if(isSafe(board,i,j,n)){
                board[i][j] = 1;

                bool QueenRakhPaye = solve(board,i+1,n,v);
                if(QueenRakhPaye)
                    return true;

                board[i][j] = 0;
            }
        }
        return false;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        int board[10][10] = {0};
        vector<vector<string>> v;
        solve(board,0,n,v);
        return v;
    }
};
