class Solution {
public:
    void solve(int n,int open,int close,string op,vector<string> &v){
        if(n==0){
            v.push_back(op);
            return;
        }
        if(open!=n){
            string op1 = op;
            op1 += '(';
            solve(n-1,open+1,close,op1,v);
        }
        
        if(open>close){
            string op2 = op;
            op2 += ')';
            solve(n-1,open,close+1,op2,v);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        int open=0;
        int close=0;
        string op="";
        vector<string> v;
        solve(2*n,open,close,op,v);
        return v;
    }
};
